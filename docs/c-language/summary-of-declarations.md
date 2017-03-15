---
title: Riepilogo di dichiarazioni | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 53a5e9e5-1a33-40b5-9dea-7f669b479329
caps.latest.revision: 11
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Human Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: cf1442e98cdd7489a395bec211cda1bbb037bae2
ms.lasthandoff: 02/24/2017

---
# <a name="summary-of-declarations"></a>Riepilogo di dichiarazioni
`declaration`:  
 *declaration-specifiers attribute-seq* opz*init-declarator-list*opz**;**  
  
 /\* *attribute-seq* è specifico di Microsoft */  
  
 *declaration-specifiers*:  
 *storage-class-specifier declaration-specifiers*opz  
  
 *type-specifier declaration-specifiers*opz  
  
 *type-qualifier declaration-specifiers*opz  
  
 *attribute-seq* :            /\* *attribute-seq* è specifico di Microsoft \*/  
 *attribute attribute-seq* opz  
  
 *attribute* : uno tra      /* Specifico di Microsoft \*/  
 ||||  
|-|-|-|  
|[__asm](../assembler/inline/asm.md)|[__clrcall](../cpp/clrcall.md)|[__stdcall](../cpp/stdcall.md)|  
|[__based](../cpp/based-grammar.md)|[__fastcall](../cpp/fastcall.md)|[__thiscall](../cpp/thiscall.md)|  
|[__cdecl](../cpp/cdecl.md)|[__inline](../cpp/inline-functions-cpp.md)|[__vectorcall](../cpp/vectorcall.md)|  
  
 *init-declarator-list*:  
 *init-declarator*  
  
 *init-declarator-list*  **,**  *init-declarator*  
  
 *init-declarator*:  
 *declarator*  
  
 *declarator*  **=**  *initializer* /* Per inizializzazione scalare \*/  
  
 *storage-class-specifier*:  
 **auto**  
  
 **register**  
  
 **static**  
  
 **extern**  
  
 **typedef**  
  
 **__declspec (**  *extended-decl-modifier-seq*  **)** /* Specifico di Microsoft \*/  
  
 *type-specifier*:  
 **void**  
  
 **char**  
  
 **short**  
  
 **int**  
  
 `__int8` /* Specifico di Microsoft \*/  
  
 `__int16` /* Specifico di Microsoft \*/  
  
 `__int32` /* Specifico di Microsoft \*/  
  
 `__int64` /* Specifico di Microsoft \*/  
  
 **long**  
  
 **float**  
  
 **double**  
  
 **signed**  
  
 **unsigned**  
  
 *struct-or-union-specifier*  
  
 *enum-specifier*  
  
 *typedef-name*  
  
 *type-qualifier*:  
 **const**  
  
 `volatile`  
  
 `declarator`:  
 `pointer`opz*direct-declarator*  
  
 *direct-declarator*:  
 *identifier*  
  
 **(**  *declarator*  **)**  
  
 *direct-declarator*  **[**  *constant-expression* opz**]**  
  
 *direct-declarator*  **(**  *parameter-type-list*  **)** /* Dichiaratore nuovo stile \*/  
  
 *direct-declarator*  **(**  *identifier-list*opz**)** /* Dichiaratore stile obsoleto \*/  
  
 `pointer`:  
 **\*** *type-qualifier-list*opz  
  
 **\*** *type-qualifier-list*opz`pointer`  
  
 *parameter-type-list*:                           /\* Elenco parametri \*/  
 *parameter-list*  
  
 *parameter-list* **, ...**  
  
 *parameter-list*:  
 *parameter-declaration*  
  
 *parameter-list*  **,**  *parameter-declaration*  
  
 *type-qualifier-list*:  
 *type-qualifier*  
  
 *type-qualifier-list type-qualifier*  
  
 *enum-specifier*:  
 **enum**  *identifier*opz**{** *enumerator-list* **}**  
  
 **enum**  *identifier*  
  
 *enumerator-list*:  
 *enumerator*  
  
 *enumerator-list*  **,**  `enumerator`  
  
 `enumerator`:  
 *enumeration-constant*  
  
 *enumeration-constant*  **=**  *constant-expression*  
  
 *enumeration-constant*:  
 *identifier*  
  
 *struct-or-union-specifier*:  
 *struct-or-union identifier*opz**{** *struct-declaration-list* **}** *struct-or-union identifier*  
  
 *struct-or-union*:  
 **struct**  
  
 **union**  
  
 *struct-declaration-list*:  
 *struct-declaration*  
  
 *struct-declaration-list struct-declaration*  
  
 *struct-declaration*:  
 *specifier-qualifier-list struct-declarator-list* **;**  
  
 *specifier-qualifier-list*:  
 *type-specifier specifier-qualifier-list*opz  
  
 *type-qualifier specifier-qualifier-list*opz  
  
 *struct-declarator-list*:  
 *struct-declarator struct-declarator-list*  **,**  *struct-declarator*  
  
 *struct-declarator*:  
 *declarator*  
  
 *type-specifier declarator*opz**:** *constant-expression*  
  
 *parameter-declaration*:  
 *declaration-specifiers declarator* /* Dichiaratore denominato \*/  
  
 *declaration-specifiers abstract-declarator*opz**/\*** Dichiaratore anonimo **\*/**  
  
 *identifier-list*: **/\*** Per dichiaratore stile precedente **\* /**  
 *identifier*  
  
 *identifier-list*  **,**  *identifier*  
  
 *abstract-declarator*: **/\*** Usato con dichiaratori anonimi **\*/**  
 *pointer*  
  
 `pointer`opz*direct-abstract-declarator*  
  
 *direct-abstract-declarator*:  
 **(**  *abstract-declarator*  **)**  
  
 *direct-abstract-declarator*opz**[** *constant-expression*opz**]**  
  
 *direct-abstract-declarator*opz**(** *parameter-type-list* opz**)**  
  
 *initializer*:  
 *assignment-expression*  
  
 **{**  *initializer-list*  **}** /* Per inizializzazione aggregata \*/  
  
 **{**  *initializer-list*  **, }**  
  
 *initializer-list*:  
 *initializer*  
  
 *initializer-list*  **,**  *initializer*  
  
 *type-name*:  
 *specifier-qualifier-list abstract-declarator*opz  
  
 *typedef-name*:  
 *identifier*  
  
 *extended-decl-modifier-seq*:/\*    Specifico di Microsoft \*/  
 *extended-decl-modifier*opz  
  
 *extended-decl-modifier-seq extended-decl-modifier*  
  
 *extended-decl-modifier*:   /\* Specifico di Microsoft \*/  
 **thread**  
  
 **naked**  
  
 **dllimport**  
  
 `dllexport`  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni di chiamata](../cpp/calling-conventions.md)   
 [Grammatica a struttura di frase](../c-language/phrase-structure-grammar.md)   
 [Convenzioni di chiamata obsolete](../cpp/obsolete-calling-conventions.md)
