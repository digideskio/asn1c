/*
 * Miscellaneous functions necessary for several other modules.
 */
#ifndef	_ASN1FIX_MISC_H_
#define	_ASN1FIX_MISC_H_

/*
 * Return a pointer to the locally held string with human-readable
 * definition of the value.
 */
char const *asn1f_printable_value(asn1p_value_t *);

/*
 * Return a pointer to the locally held string with human-readable
 * definition of the reference.
 */
char const *asn1f_printable_reference(asn1p_ref_t *);

/*
 * Recursively invoke a given function over the given expr and all its
 * children.
 */
int asn1f_recurse_expr(arg_t *arg, int (*f)(arg_t *arg));

/*
 * Check that every child of a given expr has unique name or does not have any.
 * If opt_compare == NULL, the default comparison of the argument's
 * names (identifiers) will be performed.
 */
int asn1f_check_unique_expr(arg_t *arg,
		int (*opt_compare)(asn1p_expr_t *a, asn1p_expr_t *b));

/*
 * Check that every preceeding child of the given expr is not
 * having the name of the given one.
 * If opt_compare == NULL, the default comparison of the argument's
 * names (identifiers) will be performed.
 */
int asn1f_check_unique_expr_child(arg_t *arg, asn1p_expr_t *child,
		int (*opt_compare)(asn1p_expr_t *a, asn1p_expr_t *b));

/*
 * Return number of children.
 */
int asn1f_count_children(asn1p_expr_t *parent);

/*
 * Check if type is explicitly known.
 */
int asn1f_check_known_external_type(const char *);

#endif	/* _ASN1FIX_MISC_H_ */
