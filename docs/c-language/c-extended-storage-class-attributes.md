---
title: Attributi di classi di archiviazione estesi C
ms.date: 11/04/2016
helpviewer_keywords:
- __declspec keyword [C]
- extended attributes
- extended storage-class attributes
- storage class specifiers, C storage classes
ms.assetid: 2580735c-f5bf-46ab-9468-0696893d82be
ms.openlocfilehash: c2e372ebe93b9240ac6f489e8b1aefc1fbbded80
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857151"
---
# <a name="c-extended-storage-class-attributes"></a>Attributi di classi di archiviazione estesi C

**Sezione specifica Microsoft**

Informazioni più aggiornate su questo argomento sono disponibili in [__declspec (C++ Reference)](../cpp/declspec.md).

La sintassi degli attributi estesa semplifica e standardizza le estensioni specifiche di Microsoft per il linguaggio C. Gli attributi della classe di archiviazione che utilizzano la sintassi degli attributi estesa includono thread, naked, dllimport e dllexport.

La sintassi degli attributi estesa per specificare le informazioni relative alla classe di archiviazione utilizza la parola chiave __declspec, che specifica che un'istanza di un determinato tipo deve essere archiviata con un attributo della classe di archiviazione specifico di Microsoft (thread, naked, dllimport o dllexport). Esempi di altri modificatori della classe di archiviazione includono le parole chiave static ed extern. Tuttavia, queste parole chiave fanno parte dello standard ANSI del linguaggio C e, in quanto tali, non vengono analizzate dalla sintassi degli attributi estesa.

## <a name="syntax"></a>Sintassi

*storage-class-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **__declspec (** *Extended-decl-Modifier-Seq* **)**  /\* \*specifiche di Microsoft /

*Extended-decl-Modifier-Seq*:&nbsp;&nbsp;&nbsp;&nbsp;/\* \*specifiche di Microsoft /<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*extended-decl-modifier*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*extended-decl-modifier-seq* *extended-decl-modifier*

*Extended-decl-Modifier*:&nbsp;&nbsp;&nbsp;&nbsp;/\* \*specifiche di Microsoft /<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**thread**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**naked**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**dllimport**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**dllexport**

Uno spazio vuoto separa i modificatori di dichiarazione. Si noti che *extended-decl-modifier-seq* può essere vuoto. In questo caso, __declspec non ha effetto.

Gli attributi della classe di archiviazione thread, naked, dllimport e dllexport sono una proprietà solo della dichiarazione dei dati o della funzione a cui sono associati e non consentono di ridefinire gli attributi del tipo della funzione stessa. L'attributo thread influisce solo sui dati. L'attributo naked influisce solo sulle funzioni. Gli attributi dllimport e dllexport influiscono sulle funzioni e sui dati.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Dichiarazioni e tipi](../c-language/declarations-and-types.md)
