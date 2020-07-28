---
title: Riepilogo di dichiarazioni
ms.date: 11/04/2016
ms.assetid: 53a5e9e5-1a33-40b5-9dea-7f669b479329
ms.openlocfilehash: 894ed5e39ac8019048b6730d5e3b34de22f3a0c7
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220847"
---
# <a name="summary-of-declarations"></a>Riepilogo di dichiarazioni

*`declaration`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declaration-specifiers`**`attribute-seq`* <sub>opt</sub> *`init-declarator-list`* <sub>opt</sub>**`;`**

*`declaration-specifiers`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`storage-class-specifier`**`declaration-specifiers`* <sub>consenso esplicito</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`type-specifier`**`declaration-specifiers`* <sub>consenso esplicito</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`type-qualifier`**`declaration-specifiers`* <sub>consenso esplicito</sub>

*`attribute-seq`*: &nbsp; &nbsp; &nbsp; &nbsp; / \* Specifico di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`attribute`**`attribute-seq`* <sub>consenso esplicito</sub>

*`attribute`*: una delle &nbsp; &nbsp; &nbsp; &nbsp; / \* specifiche di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;[`__asm`](../assembler/inline/asm.md) [`__clrcall`](../cpp/clrcall.md) [`__stdcall`](../cpp/stdcall.md) [`__based`](../cpp/based-grammar.md) [`__fastcall`](../cpp/fastcall.md) [`__thiscall`](../cpp/thiscall.md) [`__cdecl`](../cpp/cdecl.md) [`__inline`](../cpp/inline-functions-cpp.md) [`__vectorcall`](../cpp/vectorcall.md)

*`init-declarator-list`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`init-declarator`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`init-declarator-list`*  **`,`**  *`init-declarator`*

*`init-declarator`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declarator`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declarator`*  **`=`**  *`initializer`* /\*Per l'inizializzazione scalare\*/

*`storage-class-specifier`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`auto`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`register`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`static`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`extern`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`typedef`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__declspec (`***`extended-decl-modifier-seq`* **`)`** /\* Specifiche di Microsoft\*/

*`type-specifier`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`void`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`char`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`short`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`int`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__int8`** /\*Specifiche di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__int16`** /\*Specifiche di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__int32`** /\*Specifiche di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__int64`** /\*Specifiche di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`long`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`float`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`double`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`signed`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`unsigned`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`struct-or-union-specifier`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`enum-specifier`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`typedef-name`*

*`type-qualifier`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`const`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`volatile`**

*`declarator`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`pointer`*<sub>consenso esplicito</sub>*`direct-declarator`*

*`direct-declarator`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`identifier`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`(`** *`declarator`* **`)`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`direct-declarator`***`[`** *`constant-expression`* <sub>consenso esplicito</sub>**`]`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`direct-declarator`***`(`** *`parameter-type-list`* **`)`** /\* Dichiaratore nuovo stile\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`direct-declarator`***`(`** *`identifier-list`* <sub>opt</sub> **`)`**  / \* dichiaratore di tipo obsoleto opt\*/

*`pointer`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;<strong>`*`</strong>*`type-qualifier-list`* <sub>consenso esplicito</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;<strong>`*`</strong>*`type-qualifier-list`* <sub>consenso esplicito</sub>*`pointer`*

*`parameter-type-list`*: &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; / \* Elenco di parametri\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`parameter-list`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`parameter-list`* **`, ...`**

*`parameter-list`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`parameter-declaration`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`parameter-list`* **`,`** *`parameter-declaration`*

*`type-qualifier-list`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`type-qualifier`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`type-qualifier-list`* *`type-qualifier`*

*`enum-specifier`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`enum`***`identifier`* <sub>consenso esplicito</sub> **`{`** *`enumerator-list`***`}`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`enum`** *`identifier`*

*`enumerator-list`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`enumerator`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`enumerator-list`* **`,`** *`enumerator`*

*`enumerator`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`enumeration-constant`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`enumeration-constant`* **`=`** *`constant-expression`*

*`enumeration-constant`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`identifier`*

*`struct-or-union-specifier`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`struct-or-union`**`identifier`* <sub>consenso esplicito</sub> **`{`** *`struct-declaration-list`***`}`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`struct-or-union`* *`identifier`*

*`struct-or-union`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`struct`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`union`**

*`struct-declaration-list`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`struct-declaration`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`struct-declaration-list`* *`struct-declaration`*

*`struct-declaration`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`specifier-qualifier-list`* *`struct-declarator-list`* **`;`**

*`specifier-qualifier-list`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`type-specifier`**`specifier-qualifier-list`* <sub>consenso esplicito</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`type-qualifier`**`specifier-qualifier-list`* <sub>consenso esplicito</sub>

*`struct-declarator-list`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`struct-declarator`* *`struct-declarator-list`* **`,`** *`struct-declarator`*

*`struct-declarator`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declarator`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`type-specifier`**`declarator`* <sub>consenso esplicito</sub> **`:`***`constant-expression`*

*`parameter-declaration`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declaration-specifiers`**`declarator`* /\* Dichiaratore denominato\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declaration-specifiers`**`abstract-declarator`* <sub>consenso esplicito</sub>  / \* Dichiaratore anonimo\*/

*`identifier-list`*:/ \* Per i dichiaratori obsoleti\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`identifier`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`identifier-list`* **`,`** *`identifier`*

*`abstract-declarator`*:/ \* Usato con dichiaratori anonimi\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`pointer`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`pointer`*<sub>consenso esplicito</sub>*`direct-abstract-declarator`*

*`direct-abstract-declarator`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`(`** *`abstract-declarator`* **`)`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`direct-abstract-declarator`*<sub>consenso esplicito</sub> **`[`** *`constant-expression`* <sub>consenso esplicito</sub>**`]`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`direct-abstract-declarator`*<sub>consenso esplicito</sub> **`(`** *`parameter-type-list`* <sub>consenso esplicito</sub>**`)`**

*`initializer`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`assignment-expression`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`{`***`initializer-list`* **`}`** /\* Per l'inizializzazione aggregata\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`{`** *`initializer-list`* **`, }`**

*`initializer-list`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`initializer`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`initializer-list`* **`,`** *`initializer`*

*`type-name`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`specifier-qualifier-list`**`abstract-declarator`* <sub>consenso esplicito</sub>

*`typedef-name`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`identifier`*

*`extended-decl-modifier-seq`*: &nbsp; &nbsp; &nbsp; &nbsp; / \* Specifico di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`extended-decl-modifier`*<sub>consenso esplicito</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`extended-decl-modifier-seq`* *`extended-decl-modifier`*

*`extended-decl-modifier`*: &nbsp; &nbsp; &nbsp; &nbsp; / \* Specifico di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`thread`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`naked`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`dllimport`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`dllexport`**

## <a name="see-also"></a>Vedere anche

[Convenzioni di chiamata](../cpp/calling-conventions.md)<br/>
[Grammatica della struttura di frase](../c-language/phrase-structure-grammar.md)<br/>
[Convenzioni di chiamata obsolete](../cpp/obsolete-calling-conventions.md)
