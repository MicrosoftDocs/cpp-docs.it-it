---
title: SEGMENT
ms.date: 08/30/2018
f1_keywords:
- SEGMENT
helpviewer_keywords:
- SEGMENT directive
ms.assetid: e6f68367-6714-4f06-a79c-edfa88014430
ms.openlocfilehash: b7344d9cb685e0212748d7835e19f398f14979e7
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74393733"
---
# <a name="segment"></a>SEGMENT

Definisce un segmento di programma denominato *nome* con attributi di segmento

## <a name="syntax"></a>Sintassi

> *nome* **segmento** ⟦**ReadOnly**⟧ ⟦*align*⟧ ⟦*combine*⟧ *⟦ use*⟧ *⟦ caratteristiche*⟧ **alias (** _String_ **)** ⟦ __'__ *Class* __'__ ⟧ \
> \ di *istruzioni*
> *nome* **termina**

#### <a name="parameters"></a>Parametri

*align*<br/>
Intervallo di indirizzi di memoria da cui è possibile selezionare un indirizzo iniziale per il segmento. Il tipo di allineamento può essere uno dei seguenti:

|Allinea tipo|Indirizzo iniziale|
|----------------|----------------------|
|**BYTE**|Indirizzo byte successivo disponibile.|
|**WORD**|Successivo indirizzo di parola disponibile (2 byte per parola).|
|**DWORD**|Successivo indirizzo a doppia parola disponibile (4 byte per parola doppia).|
|**PARA**|Indirizzo successivo del paragrafo disponibile (16 byte per paragrafo).|
|**PAGE**|Indirizzo successivo della pagina disponibile (256 byte per pagina).|
|**Allinea**(*n*)|Successivo disponibile *n*indirizzo byte. Per ulteriori informazioni, vedere la sezione Osservazioni.|

Se questo parametro non viene specificato, per impostazione predefinita viene usato **para** .

*combina*\
**Pubblico**, **stack**, **comune**, **memoria**,<em>Indirizzo</em>, **privato**

*usa*\
**USE16**, **USE32**, **Flat**

*caratteristiche*\
**Informazioni**, **lettura**, **scrittura**, **esecuzione**, **condivisione**, **NOPAGE**, **NoCache**ed **eliminazione**

Sono supportati solo per COFF e corrispondono alle caratteristiche della sezione COFF di nome simile (ad esempio, **Shared** corrisponde a IMAGE_SCN_MEM_SHARED). READ imposta il flag di IMAGE_SCN_MEM_READ. Il flag di sola lettura obsoleto ha causato la cancellazione del flag di IMG_SCN_MEM_WRITE nella sezione. Se vengono impostate *caratteristiche* , le caratteristiche predefinite non vengono utilizzate e sono attivi solo i flag specificati dal programmatore.

_string_\
Questa stringa viene utilizzata come nome della sezione nell'oggetto COFF emesso.  Crea più sezioni con lo stesso nome esterno, con nomi di segmenti MASM distinti.

Non supportato con **/OMF**.

*class*\
Definisce la modalità di combinazione e ordinamento dei segmenti nel file assemblato. I valori tipici sono, `'DATA'`, `'CODE'`, `'CONST'` e `'STACK'`

## <a name="remarks"></a>Note

Per `ALIGN(n)`, *n* può essere una potenza di 2 da 1 a 8192; non supportato con **/OMF**.

## <a name="see-also"></a>Vedere anche

[Guida di riferimento alle direttive](directives-reference.md)
