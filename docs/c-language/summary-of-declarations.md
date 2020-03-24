---
title: Riepilogo di dichiarazioni
ms.date: 11/04/2016
ms.assetid: 53a5e9e5-1a33-40b5-9dea-7f669b479329
ms.openlocfilehash: e553f4bdfffcd4bba6a39b2d37af6ba25a3d65d9
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80170436"
---
# <a name="summary-of-declarations"></a>Riepilogo di dichiarazioni

*declaration*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers* *attribute-seq*<sub>opt</sub> *init-declarator-list*<sub>opt</sub> **;**

*declaration-specifiers*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;- *Specifiers dichiarazione*di *Storage-Class-specifier* <sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Type-specifier* *declaration-specifiers*<sub>opz</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*tipo-qualificatore* *-Specifiers*<sub>opz</sub>

*attribute-seq* :&nbsp;&nbsp;&nbsp;&nbsp;/\* \*specifiche di Microsoft /<br/>
&nbsp;&nbsp;&nbsp;attributo *attribute* *di &nbsp;-Seq*<sub>opt</sub>

*attribute* : uno dei&nbsp;&nbsp;&nbsp;&nbsp;/\* \*specifiche di Microsoft /<br/>
&nbsp;&nbsp;&nbsp;&nbsp;[__asm](../assembler/inline/asm.md) [__clrcall __stdcall](../cpp/clrcall.md) [__based](../cpp/stdcall.md) [__fastcall](../cpp/fastcall.md) [__thiscall](../cpp/thiscall.md) [__cdecl](../cpp/cdecl.md) [__inline](../cpp/inline-functions-cpp.md) [__vectorcall](../cpp/vectorcall.md) [__thiscall __cdecl __inline](../cpp/based-grammar.md) __vectorcall

*init-declarator-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*init-declarator*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*init-declarator-list* **,** *init-declarator*

*init-declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declarator*<br/>
&nbsp;&nbsp;&nbsp;=*inizializzatore* * /&nbsp;\** per**l'inizializzazione**scalare \*/

*storage-class-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**auto**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**register**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**static**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**extern**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**typedef**<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **__declspec (** *Extended-decl-Modifier-Seq* **)**  /\* \*specifiche di Microsoft /

*type-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**void**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**char**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**short**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**int**<br/>
&nbsp;&nbsp; **&nbsp;&nbsp;__int8 /\*** \*specifiche di Microsoft /<br/>
&nbsp;&nbsp; **&nbsp;&nbsp;__int16 /\*** \*specifiche di Microsoft /<br/>
&nbsp;&nbsp; **&nbsp;&nbsp;__int32 /\*** \*specifiche di Microsoft /<br/>
&nbsp;&nbsp; **&nbsp;&nbsp;__int64 /\*** \*specifiche di Microsoft /<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**long**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**float**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**double**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**signed**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**unsigned**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-or-union-specifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*enum-specifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*typedef-name*

*type-qualifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**const**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**volatile**

*declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*puntatore*<sub>opz</sub> *Direct-declarator*

*direct-declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **(** *dichiaratore* **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-declarator* **[** *Constant-Expression*<sub>opt</sub> **]**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-declarator* **(** *Parameter-Type-list* **)**  /\* dichiaratore nuovo stile \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-declarator* **(** *Identifier-list*<sub>opt</sub> **)**  /\* dichiaratore di tipo obsoleto \*/

*pointer*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;<strong>\*</strong> *Type-Qualifier-list*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;<strong>\*</strong> *tipo-Qualifier-list*<sub>opz</sub> *pointer*

*parameter-type-list*:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;/\* Elenco parametri \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parameter-list*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parameter-list* . **..**

*parameter-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parameter-declaration*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parameter-list* **,** *parametro-Declaration*

*type-qualifier-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Type *-Qualifier-list* *Type-Qualifier*

*enum-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**identificatore enum** *identifier*<sub>opt</sub> **{** *Enumerator-list* **}**<br/>
&nbsp;&nbsp;&nbsp;identificatore **enum** *identifier* &nbsp;

*enumerator-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*enumerator*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Enumerator-list* **,** *enumeratore*

*enumerator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*enumeration-constant*<br/>
&nbsp;&nbsp;&nbsp;*enumerazione &nbsp;-constant* **=** *Constant-Expression*

*enumeration-constant*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identifier*

*struct-or-union-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;identificatore *struct-or-Union* *identifier*<sub>opt</sub> **{** *struct-declaration-list* **}**<br/>
&nbsp;&nbsp;&nbsp;identificatore *struct-or-union* *identifier* &nbsp;

*struct-or-union*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**struct**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**union**

*struct-declaration-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-declaration*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;struct- *declaration-list* *-Declaration*

*struct-declaration*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*specifier-Qualifier-list* *struct-declarator-list* **;**

*specifier-qualifier-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Type-specifier* *specifier-Qualifier-list*<sub>opz</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Type-Qualifier* *specifier-Qualifier-list*<sub>opz</sub>

*struct-declarator-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;struct *-* dichiaratore struct-declarator *-List* **,** *struct-dichiarator*

*struct-declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declarator*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Type-specifier* *declarator*<sub>opt</sub> **:** *Constant-Expression*

*parameter-declaration*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*dichiarazione-specifiers* * /\* dichiaratore* denominato \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers* *abstract-declarator*<sub>opz</sub> /\* dichiaratore anonimo \*/

*identifier-list*: /\* Per dichiaratore stile precedente \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Identifier-list* **,** *identificatore*

*abstract-declarator*: /\* Usato con dichiaratori anonimi \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*pointer*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*pointer*<sub>opz</sub> *Direct-abstract-declarator*

*direct-abstract-declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **(** *abstract-declarator* **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-abstract-declarator*<sub>opt</sub> **[** *Constant-Expression*<sub>opt</sub> **]**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-abstract-declarator*<sub>opt</sub> **(** *Parameter-Type-list*<sub>opt</sub> **)**

*initializer*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*assignment-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **{** *inizializzatore-list* **}**  /\* per l'inizializzazione aggregata \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **{** *inizializzatore-list* **,}**

*initializer-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*initializer*<br/>
&nbsp;&nbsp;&nbsp;*elenco di inizializzatori* di &nbsp; **,** *inizializzatore*

*type-name*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*specifier-Qualifier-list* *abstract-declarator*<sub>opt</sub>

*typedef-name*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identifier*

*Extended-decl-Modifier-Seq*:&nbsp;&nbsp;&nbsp;&nbsp;/\* \*specifiche di Microsoft /<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*extended-decl-modifier*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Extended-decl-Modifier-Seq* *Extended-decl-Modifier*

*Extended-decl-Modifier*:&nbsp;&nbsp;&nbsp;&nbsp;/\* \*specifiche di Microsoft /<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**thread**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**naked**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**dllimport**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**dllexport**

## <a name="see-also"></a>Vedere anche

[Convenzioni di chiamata](../cpp/calling-conventions.md)<br/>
[Grammatica di struttura della frase](../c-language/phrase-structure-grammar.md)<br/>
[Convenzioni di chiamata obsolete](../cpp/obsolete-calling-conventions.md)
