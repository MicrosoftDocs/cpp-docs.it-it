---
title: '&lt;codecvt&gt;'
ms.date: 11/04/2016
f1_keywords:
- codecvt
- <codecvt>
helpviewer_keywords:
- codecvt header
ms.assetid: d44ee229-00d5-4761-9b48-0c702122789d
ms.openlocfilehash: ec403bd02df0b937269acc71ddf87e1942bb4c5c
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88836595"
---
# <a name="ltcodecvtgt"></a>&lt;codecvt&gt;

Definisce diversi modelli di classe che descrivono oggetti basati sul modello di classe [codecvt](../standard-library/codecvt-class.md). Questi oggetti possono fungere da [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class) che controllano le conversioni tra una sequenza di valori di tipo `Elem` e una sequenza di valori di tipo **`char`** .

## <a name="syntax"></a>Sintassi

```cpp
#include <codecvt>
```

## <a name="remarks"></a>Osservazioni

I facet delle impostazioni locali dichiarati in questa intestazione eseguono la conversione tra diverse codifiche di caratteri. Per i caratteri wide (archiviati all'interno del programma come interi a dimensione fissa):

- UCS-4 è codificato con Unicode (ISO 10646) all'interno del programma come intero a 32 bit.

- UCS-2 è codificato con Unicode all'interno del programma come intero a 16 bit.

- UCS-16 è codificato con Unicode all'interno del programma come uno dei due interi a 16 bit. Si noti che questo uso non soddisfa tutti i requisiti di una codifica di caratteri wide valida per C o C++ standard, ma è comunque ampiamente diffuso.

Per i flussi di byte (archiviati in un file, trasmessi come sequenza di byte o archiviati all'interno del programma in una matrice di **`char`** ):

- UTF-8 è codificato con Unicode all'interno di un flusso di byte come uno o più byte di otto bit con un ordine deterministico dei byte.

- UTF-16LE è codificato con Unicode in un flusso di byte come UTF-16 con ogni intero a 16 bit presentato come due byte di otto bit, con il byte meno significativo per primo.

- UTF-16BE è codificato con Unicode in un flusso di byte come UTF-16 con ogni intero a 16 bit presentato come due byte di otto bit, con il byte più significativo per primo.

### <a name="enumerations"></a>Enumerazioni

|Nome|Descrizione|
|-|-|
|[codecvt_mode](../standard-library/codecvt-enums.md#codecvt_mode)|Specifica informazioni sulla configurazione per i facet delle impostazioni locali.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[codecvt_utf8](codecvt-utf8-class.md)|Rappresenta un facet di impostazioni locali che esegue la conversione tra caratteri wide codificati come UCS-2 o UCS-4 e un flusso di byte codificato come UTF-8.|
|[codecvt_utf8_utf16](codecvt-utf8-utf16-class.md)|Rappresenta un facet di impostazioni locali che esegue la conversione tra caratteri wide codificati come UTF-16 e un flusso di byte codificato come UTF-8.|
|[codecvt_utf16](codecvt-utf16-class.md)|Rappresenta un facet di impostazioni locali che esegue la conversione tra caratteri wide codificati come UCS-2 o UCS-4 e un flusso di byte codificato come UTF-16LE o UTF-16BE.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<codecvt>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
