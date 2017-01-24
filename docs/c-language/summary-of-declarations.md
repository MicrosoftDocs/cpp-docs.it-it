---
title: "Riepilogo di dichiarazioni | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
ms.assetid: 53a5e9e5-1a33-40b5-9dea-7f669b479329
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Riepilogo di dichiarazioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

`declaration`:  
 *declaration\-specifiers attribute\-seq*  opt *init\-declarator\-list* opt**;**  
  
 \/\* *attribute\-seq* è specifico di Microsoft \*\/  
  
 *declaration\-specifiers*:  
 *storage\-class\-specifier declaration\-specifiers* opt  
  
 *type\-specifier declaration\-specifiers* opt  
  
 *type\-qualifier declaration\-specifiers* opt  
  
 *attribute\-seq* :            \/\* *attribute\-seq* è specifico di Microsoft \*\/  
 *attribute attribute\-seq* opt  
  
 *attribute* : uno tra     \/\* Specifico di Microsoft \*\/  
 ||||  
|-|-|-|  
|[\_\_asm](../assembler/inline/asm.md)|[\_\_clrcall](../cpp/clrcall.md)|[\_\_stdcall](../cpp/stdcall.md)|  
|[\_\_based](../cpp/based-grammar.md)|[\_\_fastcall](../cpp/fastcall.md)|[\_\_thiscall](../cpp/thiscall.md)|  
|[\_\_cdecl](../cpp/cdecl.md)|[\_\_inline](../misc/inline-inline-forceinline.md)|[\_\_vectorcall](../cpp/vectorcall.md)|  
  
 *init\-declarator\-list*:  
 *init\-declarator*  
  
 *init\-declarator\-list*  **,**  *init\-declarator*  
  
 *init\-declarator*:  
 *declarator*  
  
 *declarator*  **\=**  *initializer* \/\* Per l'inizializzazione scalare \*\/  
  
 *storage\-class\-specifier*:  
 **auto**  
  
 **register**  
  
 **static**  
  
 **extern**  
  
 **typedef**  
  
 **\_\_declspec \(**  *extended\-decl\-modifier\-seq*  **\)** \/\* Specifico di Microsoft \*\/  
  
 *type\-specifier*:  
 **void**  
  
 **char**  
  
 **short**  
  
 **int**  
  
 `__int8` \/\* Specifico di Microsoft \*\/  
  
 `__int16` \/\* Specifico di Microsoft \*\/  
  
 `__int32` \/\* Specifico di Microsoft \*\/  
  
 `__int64` \/\* Specifico di Microsoft \*\/  
  
 **long**  
  
 **float**  
  
 **double**  
  
 **signed**  
  
 **unsigned**  
  
 *struct\-or\-union\-specifier*  
  
 *enum\-specifier*  
  
 *typedef\-name*  
  
 *type\-qualifier*:  
 **const**  
  
 `volatile`  
  
 `declarator`:  
 `pointer` opt *direct\-declarator*  
  
 *direct\-declarator*:  
 *identifier*  
  
 **\(**  *declarator*  **\)**  
  
 *direct\-declarator*  **\[**  *constant\-expression*  opt **\]**  
  
 *direct\-declarator*  **\(**  *parameter\-type\-list*  **\)** \/\* Dichiaratore nuovo stile \*\/  
  
 *direct\-declarator*  **\(**  *identifier\-list* opt **\)** \/\* Dichiaratore stile obsoleto \*\/  
  
 `pointer`:  
 **\*** *type\-qualifier\-list* opt  
  
 **\*** *type\-qualifier\-list* opt `pointer`  
  
 *parameter\-type\-list*:                           \/\* Elenco di parametri \*\/  
 *parameter\-list*  
  
 *parameter\-list* **, ...**  
  
 *parameter\-list*:  
 *parameter\-declaration*  
  
 *parameter\-list*  **,**  *parameter\-declaration*  
  
 *type\-qualifier\-list*:  
 *type\-qualifier*  
  
 *type\-qualifier\-list type\-qualifier*  
  
 *enum\-specifier*:  
 **enum**  *identifier* opt **{** *enumerator\-list* **}**  
  
 **enum**  *identifier*  
  
 *enumerator\-list*:  
 *enumerator*  
  
 *enumerator\-list*  **,**  `enumerator`  
  
 `enumerator`:  
 *enumeration\-constant*  
  
 *enumeration\-constant*  **\=**  *constant\-expression*  
  
 *enumeration\-constant*:  
 *identifier*  
  
 *struct\-or\-union\-specifier*:  
 *struct\-or\-union identifier* opt **{** *struct\-declaration\-list* **}** *struct\-or\-union identifier*  
  
 *struct\-or\-union*:  
 **struct**  
  
 **union**  
  
 *struct\-declaration\-list*:  
 *struct\-declaration*  
  
 *struct\-declaration\-list struct\-declaration*  
  
 *struct\-declaration*:  
 *specifier\-qualifier\-list struct\-declarator\-list*  **;**  
  
 *specifier\-qualifier\-list*:  
 *type\-specifier specifier\-qualifier\-list* opt  
  
 *type\-qualifier specifier\-qualifier\-list* opt  
  
 *struct\-declarator\-list*:  
 *struct\-declarator struct\-declarator\-list*  **,**  *struct\-declarator*  
  
 *struct\-declarator*:  
 *declarator*  
  
 *type\-specifier declarator* opt **:** *constant\-expression*  
  
 *parameter\-declaration*:  
 *declaration\-specifiers declarator* \/\* Dichiaratore denominato\*\/  
  
 *declaration\-specifiers abstract\-declarator* opt **\/\*** Dichiaratore anonimo **\*\/**  
  
 *identifier\-list*: **\/\*** Per dichiaratore obsoleto **\* \/**  
 *identifier*  
  
 *identifier\-list*  **,**  *identifier*  
  
 *abstract\-declarator*: **\/\*** Utilizzato con i dichiaratori anonimi **\*\/**  
 *puntatore*  
  
 `pointer` opt *direct\-abstract\-declarator*  
  
 *direct\-abstract\-declarator*:  
 **\(**  *abstract\-declarator*  **\)**  
  
 *direct\-abstract\-declarator* opt **\[** *constant\-expression* opt **\]**  
  
 *direct\-abstract\-declarator* opt **\(** *parameter\-type\-list* opt **\)**  
  
 *initializer*:  
 *assignment\-expression*  
  
 **{**  *initializer\-list*  **}** \/\* Per l'inizializzazione aggregata \*\/  
  
 **{**  *initializer\-list*  **, }**  
  
 *initializer\-list*:  
 *initializer*  
  
 *initializer\-list*  **,**  *initializer*  
  
 *type\-name*:  
 *specifier\-qualifier\-list abstract\-declarator* opt  
  
 *typedef\-name*:  
 *identifier*  
  
 *extended\-decl\-modifier\-seq*:\/\*    Specifico di Microsoft \*\/  
 *extended\-decl\-modifier* opt  
  
 *extended\-decl\-modifier\-seq extended\-decl\-modifier*  
  
 *extended\-decl\-modifier*:   \/\* Specifico di Microsoft \*\/  
 **thread**  
  
 **naked**  
  
 **dllimport**  
  
 `dllexport`  
  
## Vedere anche  
 [Convenzioni di chiamata](../cpp/calling-conventions.md)   
 [Grammatica a struttura di frase](../c-language/phrase-structure-grammar.md)   
 [Convenzioni di chiamata obsolete](../cpp/obsolete-calling-conventions.md)