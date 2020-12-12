---
description: 'Altre informazioni su: sezioni (C/C++)'
title: SECTIONS (C/C++)
ms.date: 11/04/2016
f1_keywords:
- SECTIONS
helpviewer_keywords:
- SECTIONS .def file statement
ms.assetid: 7b974366-9ef5-4e57-bbcc-73a1df6f8857
ms.openlocfilehash: aaebeb19c921dfb389c55209c7a371f49043cb56
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224764"
---
# <a name="sections-cc"></a>SECTIONS (C/C++)

Introduce una sezione di uno o più `definitions` identificatori di accesso per le sezioni del file di output del progetto.

```
SECTIONS
definitions
```

## <a name="remarks"></a>Commenti

Ogni definizione deve essere riportata in una riga separata. La `SECTIONS` parola chiave può trovarsi nella stessa riga della prima definizione o in una riga precedente. Il file def può contenere una o più `SECTIONS` istruzioni.

Questa `SECTIONS` istruzione imposta gli attributi per una o più sezioni del file di immagine e può essere usata per eseguire l'override degli attributi predefiniti per ogni tipo di sezione.

Il formato di `definitions` è:

`.section_name specifier`

dove `.section_name` è il nome di una sezione nell'immagine del programma e `specifier` è uno o più dei modificatori di accesso seguenti:

|Modificatore|Description|
|--------------|-----------------|
|`EXECUTE`|La sezione è eseguibile|
|`READ`|Consente operazioni di lettura sui dati|
|`SHARED`|Condivide la sezione tra tutti i processi che caricano l'immagine|
|`WRITE`|Consente operazioni di scrittura sui dati|

Separare i nomi degli identificatori con uno spazio. Ad esempio:

```
SECTIONS
.rdata READ WRITE
```

`SECTIONS` contrassegna l'inizio di un elenco di sezioni `definitions` . Ogni `definition` deve trovarsi su una riga separata. La `SECTIONS` parola chiave può trovarsi sulla stessa riga del primo `definition` o su una riga precedente. Il file def può contenere una o più `SECTIONS` istruzioni. La `SEGMENTS` parola chiave è supportata come sinonimo di `SECTIONS` .

Versioni precedenti di Visual C++ supportate:

```
section [CLASS 'classname'] specifier
```

La `CLASS` parola chiave è supportata per la compatibilità, ma viene ignorata.

Un modo equivalente per specificare gli attributi della sezione è con l'opzione [/Section](section-specify-section-attributes.md) .

## <a name="see-also"></a>Vedi anche

[Regole per Module-Definition istruzioni](rules-for-module-definition-statements.md)
