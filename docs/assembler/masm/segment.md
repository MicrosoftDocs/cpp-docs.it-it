---
title: SEGMENT | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- SEGMENT
dev_langs:
- C++
helpviewer_keywords:
- SEGMENT directive
ms.assetid: e6f68367-6714-4f06-a79c-edfa88014430
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 87c5f37d24ce8f8ae34bbc403fcf39515cd6cba2
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43686440"
---
# <a name="segment"></a>SEGMENT

Definisce un segmento di programma chiamato *nome* presenza di attributi di segmento

## <a name="syntax"></a>Sintassi

> *nome* segmento [[READONLY]] [[*allineare*]] [[*combinare*]] [[*usare*]] [[*caratteristiche*]] ALIAS (*stringa*) [[«*classe*']]<br/>
> *Istruzioni*<br/>
> *nome* termina

#### <a name="parameters"></a>Parametri

*align*<br/>
L'intervallo di indirizzi di memoria da cui è possibile selezionare un indirizzo iniziale per il segmento. Il tipo di allineamento può essere uno dei seguenti:

|Allinea tipo|Indirizzo iniziale|
|----------------|----------------------|
|**BYTE**|Indirizzo dei byte disponibile successivo.|
|**WORD**|Indirizzo successivo disponibile word (2 byte per ogni parola).|
|**DWORD**|Indirizzo successivo disponibile valore double word (4 byte per ogni parola doppia).|
|**PARA**|Indirizzo disponibile paragrafo successivo (16 byte per ogni paragrafo).|
|**PAGE**|Indirizzo pagina disponibile successivo (256 byte per pagina).|
|**ALIGN**(*n*)|Successivo disponibile *n*indirizzo byte th. Per altre informazioni vedere la sezione Osservazioni.|

Se questo parametro viene omesso, **PARA** viene usato per impostazione predefinita.

*combine*<br/>
**Pubblica**, **STACK**, **comuni**, **memoria**, **in**<em>indirizzo</em>, **Privata**

*use*<br/>
**USE16**, **USE32**, **FLAT**

*Caratteristiche*<br/>
**INFO**, **leggere**, **scrivere**, **EXECUTE**, **condiviso**, **NOPAGE**, **NOCACHE**, e **annullare**

Queste sono supportate solo per COFF e corrispondono alle caratteristiche di sezione COFF di nome simile (ad esempio, **condiviso** corrisponde a IMAGE_SCN_MEM_SHARED). LETTURA imposta il flag IMAGE_SCN_MEM_READ. Il flag di sola lettura obsoleto ha causato la sezione per cancellare il flag IMG_SCN_MEM_WRITE. Eventuale *caratteristiche* vengono impostate, non vengono utilizzate le caratteristiche predefinite e solo i flag specificati dal programmatore restano validi.

`ALIAS(` *Stringa* `)`<br/>
Questa stringa viene utilizzata come nome della sezione nell'oggetto COFF generato.  Crea più sezioni con lo stesso nome esterno, con i nomi distinti segmento MASM.

Non supportato con **/omf**.

*class*<br/>
Designa come segmenti devono essere combinati e ordinati nel file assemblato. I valori tipici sono, `'DATA'`, `'CODE'`, `'CONST'` e `'STACK'`

## <a name="remarks"></a>Note

Per la `ALIGN(n)`, *n* può essere qualsiasi potenza di 2 da 1 a 8192; non è supportato con **/omf**.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>