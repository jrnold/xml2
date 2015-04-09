// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "xml2_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// xml_push_parser_create
XPtrXmlParser xml_push_parser_create(std::string uri);
RcppExport SEXP xml2_xml_push_parser_create(SEXP uriSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type uri(uriSEXP);
    __result = Rcpp::wrap(xml_push_parser_create(uri));
    return __result;
END_RCPP
}
// xml_push_parser_feed
bool xml_push_parser_feed(XPtrXmlParser parser, SEXP data);
RcppExport SEXP xml2_xml_push_parser_feed(SEXP parserSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrXmlParser >::type parser(parserSEXP);
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    __result = Rcpp::wrap(xml_push_parser_feed(parser, data));
    return __result;
END_RCPP
}
// xml_push_parser_complete
bool xml_push_parser_complete(XPtrXmlParser parser);
RcppExport SEXP xml2_xml_push_parser_complete(SEXP parserSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrXmlParser >::type parser(parserSEXP);
    __result = Rcpp::wrap(xml_push_parser_complete(parser));
    return __result;
END_RCPP
}
// xml_push_parser_doc
XPtrDoc xml_push_parser_doc(XPtrXmlParser parser);
RcppExport SEXP xml2_xml_push_parser_doc(SEXP parserSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrXmlParser >::type parser(parserSEXP);
    __result = Rcpp::wrap(xml_push_parser_doc(parser));
    return __result;
END_RCPP
}
// html_push_parser_create
XPtrHtmlParser html_push_parser_create(std::string uri);
RcppExport SEXP xml2_html_push_parser_create(SEXP uriSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type uri(uriSEXP);
    __result = Rcpp::wrap(html_push_parser_create(uri));
    return __result;
END_RCPP
}
// html_push_parser_feed
bool html_push_parser_feed(XPtrHtmlParser parser, SEXP data);
RcppExport SEXP xml2_html_push_parser_feed(SEXP parserSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrHtmlParser >::type parser(parserSEXP);
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    __result = Rcpp::wrap(html_push_parser_feed(parser, data));
    return __result;
END_RCPP
}
// html_push_parser_complete
bool html_push_parser_complete(XPtrHtmlParser parser);
RcppExport SEXP xml2_html_push_parser_complete(SEXP parserSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrHtmlParser >::type parser(parserSEXP);
    __result = Rcpp::wrap(html_push_parser_complete(parser));
    return __result;
END_RCPP
}
// html_push_parser_doc
XPtrDoc html_push_parser_doc(XPtrHtmlParser parser);
RcppExport SEXP xml2_html_push_parser_doc(SEXP parserSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrHtmlParser >::type parser(parserSEXP);
    __result = Rcpp::wrap(html_push_parser_doc(parser));
    return __result;
END_RCPP
}
// doc_parse_file
XPtrDoc doc_parse_file(std::string path, std::string encoding, int options, bool html);
RcppExport SEXP xml2_doc_parse_file(SEXP pathSEXP, SEXP encodingSEXP, SEXP optionsSEXP, SEXP htmlSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type encoding(encodingSEXP);
    Rcpp::traits::input_parameter< int >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< bool >::type html(htmlSEXP);
    __result = Rcpp::wrap(doc_parse_file(path, encoding, options, html));
    return __result;
END_RCPP
}
// doc_parse_string
XPtrDoc doc_parse_string(CharacterVector x, std::string encoding, std::string base_url, int options, bool html);
RcppExport SEXP xml2_doc_parse_string(SEXP xSEXP, SEXP encodingSEXP, SEXP base_urlSEXP, SEXP optionsSEXP, SEXP htmlSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type encoding(encodingSEXP);
    Rcpp::traits::input_parameter< std::string >::type base_url(base_urlSEXP);
    Rcpp::traits::input_parameter< int >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< bool >::type html(htmlSEXP);
    __result = Rcpp::wrap(doc_parse_string(x, encoding, base_url, options, html));
    return __result;
END_RCPP
}
// doc_parse_raw
XPtrDoc doc_parse_raw(RawVector x, std::string encoding, std::string base_url, int options, bool html);
RcppExport SEXP xml2_doc_parse_raw(SEXP xSEXP, SEXP encodingSEXP, SEXP base_urlSEXP, SEXP optionsSEXP, SEXP htmlSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type encoding(encodingSEXP);
    Rcpp::traits::input_parameter< std::string >::type base_url(base_urlSEXP);
    Rcpp::traits::input_parameter< int >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< bool >::type html(htmlSEXP);
    __result = Rcpp::wrap(doc_parse_raw(x, encoding, base_url, options, html));
    return __result;
END_RCPP
}
// doc_format
std::string doc_format(XPtrDoc x);
RcppExport SEXP xml2_doc_format(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrDoc >::type x(xSEXP);
    __result = Rcpp::wrap(doc_format(x));
    return __result;
END_RCPP
}
// doc_write
void doc_write(XPtrDoc x, std::string path);
RcppExport SEXP xml2_doc_write(SEXP xSEXP, SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrDoc >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    doc_write(x, path);
    return R_NilValue;
END_RCPP
}
// doc_root
XPtrNode doc_root(XPtrDoc x);
RcppExport SEXP xml2_doc_root(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrDoc >::type x(xSEXP);
    __result = Rcpp::wrap(doc_root(x));
    return __result;
END_RCPP
}
// doc_url
CharacterVector doc_url(XPtrDoc x);
RcppExport SEXP xml2_doc_url(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrDoc >::type x(xSEXP);
    __result = Rcpp::wrap(doc_url(x));
    return __result;
END_RCPP
}
// unique_ns
CharacterVector unique_ns(CharacterVector ns);
RcppExport SEXP xml2_unique_ns(SEXP nsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type ns(nsSEXP);
    __result = Rcpp::wrap(unique_ns(ns));
    return __result;
END_RCPP
}
// doc_namespaces
CharacterVector doc_namespaces(XPtrDoc doc);
RcppExport SEXP xml2_doc_namespaces(SEXP docSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    __result = Rcpp::wrap(doc_namespaces(doc));
    return __result;
END_RCPP
}
// node_name
std::string node_name(XPtrNode node, CharacterVector nsMap);
RcppExport SEXP xml2_node_name(SEXP nodeSEXP, SEXP nsMapSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nsMap(nsMapSEXP);
    __result = Rcpp::wrap(node_name(node, nsMap));
    return __result;
END_RCPP
}
// node_text
std::string node_text(XPtrNode node, bool trim);
RcppExport SEXP xml2_node_text(SEXP nodeSEXP, SEXP trimSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type trim(trimSEXP);
    __result = Rcpp::wrap(node_text(node, trim));
    return __result;
END_RCPP
}
// node_attr
SEXP node_attr(XPtrNode node, std::string name, CharacterVector missing, CharacterVector nsMap);
RcppExport SEXP xml2_node_attr(SEXP nodeSEXP, SEXP nameSEXP, SEXP missingSEXP, SEXP nsMapSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type missing(missingSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nsMap(nsMapSEXP);
    __result = Rcpp::wrap(node_attr(node, name, missing, nsMap));
    return __result;
END_RCPP
}
// node_attrs
CharacterVector node_attrs(XPtrNode node, CharacterVector nsMap);
RcppExport SEXP xml2_node_attrs(SEXP nodeSEXP, SEXP nsMapSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nsMap(nsMapSEXP);
    __result = Rcpp::wrap(node_attrs(node, nsMap));
    return __result;
END_RCPP
}
// node_format
std::string node_format(XPtrDoc doc, XPtrNode node, bool format, int indent);
RcppExport SEXP xml2_node_format(SEXP docSEXP, SEXP nodeSEXP, SEXP formatSEXP, SEXP indentSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type format(formatSEXP);
    Rcpp::traits::input_parameter< int >::type indent(indentSEXP);
    __result = Rcpp::wrap(node_format(doc, node, format, indent));
    return __result;
END_RCPP
}
// node_children
Rcpp::List node_children(XPtrNode node, bool onlyNode);
RcppExport SEXP xml2_node_children(SEXP nodeSEXP, SEXP onlyNodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyNode(onlyNodeSEXP);
    __result = Rcpp::wrap(node_children(node, onlyNode));
    return __result;
END_RCPP
}
// node_parents
Rcpp::List node_parents(XPtrNode node);
RcppExport SEXP xml2_node_parents(SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    __result = Rcpp::wrap(node_parents(node));
    return __result;
END_RCPP
}
// node_siblings
Rcpp::List node_siblings(XPtrNode node, bool onlyNode);
RcppExport SEXP xml2_node_siblings(SEXP nodeSEXP, SEXP onlyNodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyNode(onlyNodeSEXP);
    __result = Rcpp::wrap(node_siblings(node, onlyNode));
    return __result;
END_RCPP
}
// node_parent
XPtrNode node_parent(XPtrNode n);
RcppExport SEXP xml2_node_parent(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type n(nSEXP);
    __result = Rcpp::wrap(node_parent(n));
    return __result;
END_RCPP
}
// node_write
void node_write(XPtrNode n, XPtrDoc d, std::string path);
RcppExport SEXP xml2_node_write(SEXP nSEXP, SEXP dSEXP, SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type n(nSEXP);
    Rcpp::traits::input_parameter< XPtrDoc >::type d(dSEXP);
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    node_write(n, d, path);
    return R_NilValue;
END_RCPP
}
// node_path
std::string node_path(XPtrNode n);
RcppExport SEXP xml2_node_path(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type n(nSEXP);
    __result = Rcpp::wrap(node_path(n));
    return __result;
END_RCPP
}
// nodes_duplicated
LogicalVector nodes_duplicated(ListOf<XPtrNode> nodes);
RcppExport SEXP xml2_nodes_duplicated(SEXP nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< ListOf<XPtrNode> >::type nodes(nodesSEXP);
    __result = Rcpp::wrap(nodes_duplicated(nodes));
    return __result;
END_RCPP
}
// node_type
int node_type(XPtrNode node);
RcppExport SEXP xml2_node_type(SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    __result = Rcpp::wrap(node_type(node));
    return __result;
END_RCPP
}
// url_absolute
CharacterVector url_absolute(CharacterVector x, CharacterVector base);
RcppExport SEXP xml2_url_absolute(SEXP xSEXP, SEXP baseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type base(baseSEXP);
    __result = Rcpp::wrap(url_absolute(x, base));
    return __result;
END_RCPP
}
// url_relative
CharacterVector url_relative(CharacterVector x, CharacterVector base);
RcppExport SEXP xml2_url_relative(SEXP xSEXP, SEXP baseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type base(baseSEXP);
    __result = Rcpp::wrap(url_relative(x, base));
    return __result;
END_RCPP
}
// url_parse
List url_parse(CharacterVector x);
RcppExport SEXP xml2_url_parse(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(url_parse(x));
    return __result;
END_RCPP
}
// url_escape
CharacterVector url_escape(CharacterVector x, CharacterVector reserved);
RcppExport SEXP xml2_url_escape(SEXP xSEXP, SEXP reservedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type reserved(reservedSEXP);
    __result = Rcpp::wrap(url_escape(x, reserved));
    return __result;
END_RCPP
}
// url_unescape
CharacterVector url_unescape(CharacterVector x);
RcppExport SEXP xml2_url_unescape(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(url_unescape(x));
    return __result;
END_RCPP
}
// node_find_all
Rcpp::List node_find_all(XPtrNode node, XPtrDoc doc, std::string xpath, CharacterVector nsMap);
RcppExport SEXP xml2_node_find_all(SEXP nodeSEXP, SEXP docSEXP, SEXP xpathSEXP, SEXP nsMapSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type xpath(xpathSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nsMap(nsMapSEXP);
    __result = Rcpp::wrap(node_find_all(node, doc, xpath, nsMap));
    return __result;
END_RCPP
}
// node_find_one
XPtrNode node_find_one(XPtrNode node, XPtrDoc doc, std::string xpath, CharacterVector nsMap);
RcppExport SEXP xml2_node_find_one(SEXP nodeSEXP, SEXP docSEXP, SEXP xpathSEXP, SEXP nsMapSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type xpath(xpathSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nsMap(nsMapSEXP);
    __result = Rcpp::wrap(node_find_one(node, doc, xpath, nsMap));
    return __result;
END_RCPP
}
