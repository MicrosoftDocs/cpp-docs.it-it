---
description: 'Altre informazioni su: segmento'
title: SEGMENT
ms.date: 12/16/2019
f1_keywords:
- SEGMENT
helpviewer_keywords:
- SEGMENT directive
ms.assetid: e6f68367-6714-4f06-a79c-edfa88014430
ms.openlocfilehash: aeb99080043cbfb13fdec1c2e82df3a6d16b306d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97125593"
---
# <a name="segment"></a>SEGMENT

Definisce un segmento di programma denominato *nome* con attributi di segmento

## <a name="syntax"></a>Sintassi

> *nome* **segmento** ⟦**ReadOnly**⟧ ⟦*align*⟧ ⟦*combine*⟧*⟦ use*⟧*⟦ caratteristiche*⟧ **alias (**_String_**)** ⟦__'__*Class*__'__⟧ \
> *istruzioni*\
> *nome* **termina**

#### <a name="parameters"></a>Parametri

*allineare*\
Intervallo di indirizzi di memoria da cui è possibile selezionare un indirizzo iniziale per il segmento. Il tipo di allineamento può essere uno dei seguenti:

|Allinea tipo|Indirizzo iniziale|
|----------------|----------------------|
|**BYTE**|Indirizzo byte successivo disponibile.|
|**WORD**|Successivo indirizzo di parola disponibile (2 byte per parola).|
|**DWORD**|Successivo indirizzo a doppia parola disponibile (4 byte per parola doppia).|
|**PARA**|Indirizzo successivo del paragrafo disponibile (16 byte per paragrafo).|
|**PAGINA**|Indirizzo successivo della pagina disponibile (256 byte per pagina).|
|**Allinea**(*n*)|Successivo disponibile *n* indirizzo byte. Per ulteriori informazioni, vedere la sezione Osservazioni.|

Se questo parametro non viene specificato, per impostazione predefinita viene usato **para** .

*combine* (solo MASM a 32 bit) \
**Pubblico**, **stack**, **comune**, **memoria**, <em>Indirizzo</em>, **privato**

*use* (solo MASM a 32 bit) \
**USE16**, **USE32**, **Flat**

*caratteristiche*\
**Informazioni**, **lettura**, **scrittura**, **esecuzione**, **condivisione**, **NOPAGE**, **NoCache** ed **eliminazione**

Sono supportati solo per COFF e corrispondono alle caratteristiche della sezione COFF di nome simile (ad esempio, **Shared** corrisponde a IMAGE_SCN_MEM_SHARED). READ imposta il flag di IMAGE_SCN_MEM_READ. Il flag di sola lettura obsoleto ha causato la cancellazione del flag di IMG_SCN_MEM_WRITE nella sezione. Se vengono impostate *caratteristiche* , le caratteristiche predefinite non vengono utilizzate e sono attivi solo i flag specificati dal programmatore.

_stringa_\
Questa stringa viene utilizzata come nome della sezione nell'oggetto COFF emesso.  Crea più sezioni con lo stesso nome esterno, con nomi di segmenti MASM distinti.

Non supportato con **/OMF**.

*classe*\
Definisce la modalità di combinazione e ordinamento dei segmenti nel file assemblato. I valori tipici sono,, `'DATA'` `'CODE'` `'CONST'` e `'STACK'`

## <a name="remarks"></a>Commenti

Per `ALIGN(n)` , *n* può essere una potenza di 2 da 1 a 8192; non supportata con **/OMF**.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
