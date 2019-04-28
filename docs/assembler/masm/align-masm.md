---
title: ALIGN (MASM)
ms.date: 01/02/2019
f1_keywords:
- align
helpviewer_keywords:
- ALIGN directive
ms.assetid: 1c386b23-439f-4ec3-a6de-74427b25e47f
ms.openlocfilehash: eb42b1952b3fd59438f0dd4c29d48c91c4d8864d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62166477"
---
# <a name="align-masm"></a>ALIGN (MASM)

Il **ALIGN** direttiva Allinea il successivo elemento di dati o dell'istruzione in un indirizzo che corrisponde a un multiplo del relativo parametro. Il parametro deve essere una potenza di 2 (ad esempio, 1, 2, 4 e così via) che è minore o uguale all'allineamento del segmento.

## <a name="syntax"></a>Sintassi

> ALIGN [[*numero*]]

## <a name="remarks"></a>Note

Il **ALIGN** direttiva consente di specificare l'offset di inizio di un elemento dati o un'istruzione. I dati allineati possono migliorare le prestazioni, a scapito di spazio inutilizzato tra gli elementi di dati. Notevole miglioramento delle prestazioni può essere visualizzati quando accessi ai dati sono a limiti che rientrano nelle righe della cache. Gli accessi ai limiti naturali per i tipi nativi significa meno tempo impiegato per abilitare il microcodice Riallineamento hardware interno.

La necessità di istruzioni allineate è rara nei processori moderni che usano un modello di indirizzamento semplice, ma potrebbero essere necessario per le destinazioni di spostamento nel codice precedente per altri modelli di indirizzamento.

Quando i dati sono allineati, lo spazio ignorato viene riempito con zeri. Quando le istruzioni sono allineate, lo spazio ignorato viene riempito con istruzioni NOP ridimensionati in modo appropriato.

## <a name="see-also"></a>Vedere anche

[EVEN](even.md)<br/>
[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>