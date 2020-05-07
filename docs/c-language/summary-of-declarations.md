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

*dichiarazione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers* *attribute-seq*<sub>opz</sub> *init-declarator-list*<sub>opt</sub> **;**

*declaration-specifiers*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*storage-class-specifier* *declaration-specifiers*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-specifier* *declaration-specifiers*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier* *declaration-specifiers*<sub>opt</sub>

*attribute-seq* &nbsp; &nbsp; &nbsp; &nbsp; :/ specifico di Microsoft\*\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*attribute* *attribute-seq*<sub>opt</sub>

*attribute* : una delle&nbsp; &nbsp; &nbsp; &nbsp; / \* specifiche di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;[__asm](../assembler/inline/asm.md) [__clrcall](../cpp/clrcall.md) [__stdcall](../cpp/stdcall.md) [__based](../cpp/based-grammar.md) [__fastcall](../cpp/fastcall.md) [__thiscall](../cpp/thiscall.md) [__cdecl](../cpp/cdecl.md) [__inline](../cpp/inline-functions-cpp.md) [__vectorcall](../cpp/vectorcall.md)

*init-declarator-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*init-declarator*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*init-declarator-list*  **,**  *init-declarator*

*init-declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*dichiaratore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declarator***=**\* *inizializzatore*  / di dichiaratori per inizializzazione scalare    \*/

*storage-class-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**Automatico**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**Registro**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**statico**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**extern**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**typedef**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**__declspec (** *Extended-decl-Modifier-Seq* **)**  / \* specifico di Microsoft\*/

*type-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**vuoto**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**char**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**breve**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**int**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**__int8** / __int8\* specifiche di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**__int16** / __int16\* specifiche di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**__int32** / __int32\* specifiche di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**__int64** / __int64\* specifiche di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**lungo**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**float**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**doppio**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**con segno**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**unsigned**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-or-union-specifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identificatore enum*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*typedef-name*

*qualificatore tipo*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**const**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**volatile**

*dichiaratore*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*puntatore*<sub>opz</sub> *Direct-declarator*

*Direct-declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identificatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**(** *dichiaratore* **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-declarator* **[** *Constant-Expression*<sub>opz</sub> **]**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-declarator* **(** *Parameter-Type-list* **)**  / \* dichiaratore nuovo stile\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-declarator* **(** *Identifier-list*<sub>opt</sub> **)**  / \* dichiaratore di stile obsoleto\*/

*puntatore*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;<strong>\*</strong>*Type-Qualifier-list*<sub>opz</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;<strong>\*</strong>*Type-Qualifier-list*<sub>opz</sub> *pointer*

*Parameter-Type-list*&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; :&nbsp; &nbsp; &nbsp; &nbsp; elenco di parametri&nbsp; &nbsp; / \*\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*elenco di parametri*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*elenco di parametri* **,...**

*elenco di parametri*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Dichiarazione di parametro*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parameter-list* **,** *parametro-Declaration*

*type-qualifier-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*qualificatore di tipo*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier-list* *type-qualifier*

*enum-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**identificatore enum** *identifier*<sub>opt</sub> **{** *Enumerator-list* **}**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**enum** *identifier*

*enumeratore-elenco*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*enumeratore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Enumerator-list* **,** *enumeratore*

*enumeratore*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Enumerazione-costante*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Enumeration-* **=** Constant *-costante-espressione*

*enumerazione-costante*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identificatore*

*struct-or-Union-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;identificatore *struct-or-Union* *identifier*<sub>opz</sub> **{** *struct-declaration-list* **}**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-or-union* *identifier*

*struct-or-union*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**struct**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**Unione**

*struct-declaration-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-declaration*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-declaration-list* *struct-declaration*

*struct-Declaration*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*specifier-qualifier-list* *struct-declarator-list* **;**

*specifier-qualifier-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-specifier* *specifier-qualifier-list*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier* *specifier-qualifier-list*<sub>opt</sub>

*struct-declarator-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;struct- *dichiaratore* *struct-declarator-list* **,** *struct-dichiaratore*

*struct-dichiaratore*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*dichiaratore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Type-specifier* *declarator*<sub>opt</sub> **:** *Constant-Expression*

*parameter-declaration*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers* *declarator*  / \* denominato dichiaratore\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers* *abstract-declarator*<sub>opz</sub>  / \* dichiaratore anonimo\*/

*Identifier-list*:/\* per dichiaratore obsoleto\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identificatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Identifier-list* **,** *identificatore*

*abstract-declarator*:/\* usato con dichiaratori anonimi\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*puntatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*pointer*<sub>opt</sub> *direct-abstract-declarator*

*direct-abstract-declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**(** *abstract-declarator* **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-abstract-declarator*<sub>opz</sub> **[** *Constant-Expression*<sub>opt</sub> **]**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-abstract-declarator*<sub>opt</sub> **(** *Parameter-Type-list*<sub>opt</sub> **)**

*inizializzatore*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*assegnazione-espressione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**{** *inizializzatore-list* **}**  / \* per l'inizializzazione aggregata\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**{** *inizializzatore-list* **,}**

*elenco di inizializzatori*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*initializer*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*inizializzatore-elenco* **,** *inizializzatore*

*nome-tipo*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*specifier-qualifier-list* *abstract-declarator*<sub>opt</sub>

*typedef-nome*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identificatore*

*Extended-decl-Modifier-Seq*:&nbsp; &nbsp; &nbsp; &nbsp; / \* specifico di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*extended-decl-modifier*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*extended-decl-modifier-seq* *extended-decl-modifier*

*Extended-decl-Modifier*:&nbsp; &nbsp; &nbsp; &nbsp; / \* specifico di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**thread**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**Naked**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**dllimport**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**dllexport**

## <a name="see-also"></a>Vedere anche

[Convenzioni di chiamata](../cpp/calling-conventions.md)<br/>
[Grammatica della struttura di frase](../c-language/phrase-structure-grammar.md)<br/>
[Convenzioni di chiamata obsolete](../cpp/obsolete-calling-conventions.md)
