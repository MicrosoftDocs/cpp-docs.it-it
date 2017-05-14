---
title: Typedef &lt;regex&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- cmatch
- regex/std::cmatch
- cregex_iterator
- regex/std::cregex_iterator
- cregex_token_iterator
- regex/std::cregex_token_iterator
- csub_match
- regex/std::csub_match
- regex
- regex/std::regex
- smatch
- regex/std::smatch
- sregex_iterator
- regex/std::sregex_iterator
- sregex_token_iterator
- regex/std::sregex_token_iterator
- ssub_match
- regex/std::ssub_match
- wcmatch
- regex/std::wcmatch
- wcregex_iterator
- regex/std::wcregex_iterator
- wcregex_token_iterator
- regex/std::wcregex_token_iterator
- wcsub_match
- regex/std::wcsub_match
- wregex
- regex/std::wregex
- wsmatch
- regex/std::wsmatch
- wsregex_iterator
- regex/std::wsregex_iterator
- wsregex_token_iterator
- regex/std::wsregex_token_iterator
- wssub_match
- regex/std::wssub_match
dev_langs:
- C++
ms.assetid: e6a69067-106c-4a24-9e08-7c867a3a2260
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: Machine Translation
ms.sourcegitcommit: 4ecf60434799708acab4726a95380a2d3b9dbb3a
ms.openlocfilehash: 99e7c52466e94e34af0fa2e933e8c9132a440e3c
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="ltregexgt-typedefs"></a>Typedef &lt;regex&gt;
||||  
|-|-|-|  
|[cmatch](#cmatch)|[cregex_iterator](#cregex_iterator)|[cregex_token_iterator](#cregex_token_iterator)|  
|[csub_match](#csub_match)|[regex](#regex)|[smatch](#smatch)|  
|[sregex_iterator](#sregex_iterator)|[sregex_token_iterator](#sregex_token_iterator)|[ssub_match](#ssub_match)|  
|[wcmatch](#wcmatch)|[wcregex_iterator](#wcregex_iterator)|[wcregex_token_iterator](#wcregex_token_iterator)|  
|[wcsub_match](#wcsub_match)|[wregex](#wregex)|[wsmatch](#wsmatch)|  
|[wsregex_iterator](#wsregex_iterator)|[wsregex_token_iterator](#wsregex_token_iterator)|[wssub_match](#wssub_match)|  
  
##  <a name="cmatch"></a>  Typedef cmatch  
 Definizione dei tipi per sub_match char.  
  
```  
typedef match_results<const char*> cmatch;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe match_results](../standard-library/match-results-class.md) per iteratori di tipo `const char*`.  
  
##  <a name="cregex_iterator"></a>  Typedef cregex_iterator  
 Definizione dei tipi per regex_iterator char.  
  
```  
typedef regex_iterator<const char*> cregex_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe regex_iterator](../standard-library/regex-iterator-class.md) per iteratori di tipo `const char*`.  
  
##  <a name="cregex_token_iterator"></a>  Typedef cregex_token_iterator  
 Definizione dei tipi per char regex_token_iterator.  
  
```  
typedef regex_token_iterator<const char*> cregex_token_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe regex_token_iterator](../standard-library/regex-token-iterator-class.md) per iteratori di tipo `const char*`.  
  
##  <a name="csub_match"></a>  Typedef csub_match  
 Definizione dei tipi per sub_match char.  
  
```  
typedef sub_match<const char*> csub_match;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe sub_match](../standard-library/sub-match-class.md) per iteratori di tipo `const char*`.  
  
##  <a name="regex"></a>  Typedef regex  
 Definizione dei tipi per basic_regex char.  
  
```  
typedef basic_regex<char> regex;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe basic_regex](../standard-library/basic-regex-class.md) per iteratori di tipo `char`.  
  
> [!NOTE]
>  I caratteri a bit significativo avranno risultati imprevisti con `regex`. I valori non compresi nell'intervallo da 0 a 127 possono causare un comportamento non definito.  
  
##  <a name="smatch"></a>  Typedef smatch  
 Definizione dei tipi per match_results string.  
  
```  
typedef match_results<string::const_iterator> smatch;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe match_results](../standard-library/match-results-class.md) per iteratori di tipo `string::const_iterator`.  
  
##  <a name="sregex_iterator"></a>  Typedef sregex_iterator  
 Definizione dei tipi per regex_iterator string.  
  
```  
typedef regex_iterator<string::const_iterator> sregex_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe regex_iterator](../standard-library/regex-iterator-class.md) per iteratori di tipo `string::const_iterator`.  
  
##  <a name="sregex_token_iterator"></a>  Typedef sregex_token_iterator  
 Definizione dei tipi per regex_token_iterator string.  
  
```  
typedef regex_token_iterator<string::const_iterator> sregex_token_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe regex_token_iterator](../standard-library/regex-token-iterator-class.md) per iteratori di tipo `string::const_iterator`.  
  
##  <a name="ssub_match"></a>  Typedef ssub_match  
 Definizione dei tipi per sub_match string.  
  
```  
typedef sub_match<string::const_iterator> ssub_match;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe sub_match](../standard-library/sub-match-class.md) per iteratori di tipo `string::const_iterator`.  
  
##  <a name="wcmatch"></a>  Typedef wcmatch  
 Definizione dei tipi per match_results wchar_t.  
  
```  
typedef match_results<const wchar_t *> wcmatch;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe match_results](../standard-library/match-results-class.md) per iteratori di tipo `const wchar_t*`.  
  
##  <a name="wcregex_iterator"></a>  Typedef wcregex_iterator  
 Definizione dei tipi per wchar_t regex_iterator.  
  
```  
typedef regex_iterator<const wchar_t*> wcregex_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe regex_iterator](../standard-library/regex-iterator-class.md) per iteratori di tipo `const wchar_t*`.  
  
##  <a name="wcregex_token_iterator"></a>  Typedef wcregex_token_iterator  
 Definizione dei tipi per regex_token_iterator wchar_t.  
  
```  
typedef regex_token_iterator<const wchar_t*> wcregex_token_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe regex_token_iterator](../standard-library/regex-token-iterator-class.md) per iteratori di tipo `const wchar_t*`.  
  
##  <a name="wcsub_match"></a>  Typedef wcsub_match  
 Definizione dei tipi per sub_match wchar_t.  
  
```  
typedef sub_match<const wchar_t*> wcsub_match;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe sub_match](../standard-library/sub-match-class.md) per iteratori di tipo `const wchar_t*`.  
  
##  <a name="wregex"></a>  Typedef wregex  
 Definizione dei tipi per basic_regex wchar_t.  
  
```  
typedef basic_regex<wchar_t> wregex;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe basic_regex](../standard-library/basic-regex-class.md) per iteratori di tipo `wchar_t`.  
  
##  <a name="wsmatch"></a>  Typedef wsmatch  
 Definizione dei tipi per match_results wstring.  
  
```  
typedef match_results<wstring::const_iterator> wsmatch;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe match_results](../standard-library/match-results-class.md) per iteratori di tipo `wstring::const_iterator`.  
  
##  <a name="wsregex_iterator"></a>  Typedef wsregex_iterator  
 Definizione dei tipi per regex_iterator wstring.  
  
```  
typedef regex_iterator<wstring::const_iterator> wsregex_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe regex_iterator](../standard-library/regex-iterator-class.md) per iteratori di tipo `wstring::const_iterator`.  
  
##  <a name="wsregex_token_iterator"></a>  Typedef wsregex_token_iterator  
 Definizione dei tipi per regex_token_iterator wstring.  
  
```  
typedef regex_token_iterator<wstring::const_iterator> wsregex_token_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe regex_token_iterator](../standard-library/regex-token-iterator-class.md) per iteratori di tipo `wstring::const_iterator`.  
  
##  <a name="wssub_match"></a>  Typedef wssub_match  
 Definizione dei tipi per sub_match wstring.  
  
```  
typedef sub_match<wstring::const_iterator> wssub_match;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [classe sub_match](../standard-library/sub-match-class.md) per iteratori di tipo `wstring::const_iterator`.  
  
## <a name="see-also"></a>Vedere anche  
[\<regex>](../standard-library/regex.md)  
[Classe regex_constants](../standard-library/regex-constants-class.md)  
[Classe regex_error](../standard-library/regex-error-class.md)  
[Funzioni \<regex>](../standard-library/regex-functions.md)  
[Classe regex_iterator](../standard-library/regex-iterator-class.md)  
[Operatori \<regex>](../standard-library/regex-operators.md)  
[Classe regex_token_iterator](../standard-library/regex-token-iterator-class.md)  
[Classe regex_traits](../standard-library/regex-traits-class.md)  

