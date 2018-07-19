---
title: '&lt;codecvt&gt; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- codecvt
- <codecvt>
dev_langs:
- C++
helpviewer_keywords:
- codecvt header
ms.assetid: d44ee229-00d5-4761-9b48-0c702122789d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 973f183980e89ac0be268e5cbbec42de83a378f4
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38965815"
---
# <a name="ltcodecvtgt"></a>&lt;codecvt&gt;

Definisce diverse classi modello che descrivono oggetti basati sulla classe modello [codecvt](../standard-library/codecvt-class.md). Questi oggetti possono fungere [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class) che controllano le conversioni tra una sequenza di valori di tipo `Elem` e una sequenza di valori di tipo **char**.

## <a name="syntax"></a>Sintassi

```cpp
#include <codecvt>

```

## <a name="remarks"></a>Note

I facet delle impostazioni locali dichiarati in questa intestazione eseguono la conversione tra diverse codifiche di caratteri. Per i caratteri wide (archiviati all'interno del programma come interi a dimensione fissa):

- UCS-4 è codificato con Unicode (ISO 10646) all'interno del programma come intero a 32 bit.

- UCS-2 è codificato con Unicode all'interno del programma come intero a 16 bit.

- UCS-16 è codificato con Unicode all'interno del programma come uno dei due interi a 16 bit. Si noti che questo uso non soddisfa tutti i requisiti di una codifica di caratteri wide valida per C o C++ standard, ma è comunque ampiamente diffuso.

Per i flussi di byte (archiviati in un file, trasmessi come sequenza di byte o archiviati all'interno del programma in una matrice di **char**):

- UTF-8 è codificato con Unicode all'interno di un flusso di byte come uno o più byte di otto bit con un ordine deterministico dei byte.

- UTF-16LE è codificato con Unicode in un flusso di byte come UTF-16 con ogni intero a 16 bit presentato come due byte di otto bit, con il byte meno significativo per primo.

- UTF-16BE è codificato con Unicode in un flusso di byte come UTF-16 con ogni intero a 16 bit presentato come due byte di otto bit, con il byte più significativo per primo.

### <a name="enumerations"></a>Enumerazioni

|||
|-|-|
|[codecvt_mode](../standard-library/codecvt-enums.md#codecvt_mode)|Specifica informazioni sulla configurazione per i facet delle impostazioni locali.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[codecvt_utf8](codecvt-utf8-class.md)|Rappresenta un facet di impostazioni locali che esegue la conversione tra caratteri wide codificati come UCS-2 o UCS-4 e un flusso di byte codificato come UTF-8.|
|[codecvt_utf8_utf16](codecvt-utf8-utf16-class.md)|Rappresenta un facet di impostazioni locali che esegue la conversione tra caratteri wide codificati come UTF-16 e un flusso di byte codificato come UTF-8.|
|[codecvt_utf16](codecvt-utf16-class.md)|Rappresenta un facet di impostazioni locali che esegue la conversione tra caratteri wide codificati come UCS-2 o UCS-4 e un flusso di byte codificato come UTF-16LE o UTF-16BE.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<codecvt>

**Spazio dei nomi:** stdt

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
