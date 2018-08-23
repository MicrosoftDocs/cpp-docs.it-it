---
title: Proprietà chiave di tasti di scelta rapida | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Key property
ms.assetid: d1570cd9-b414-4cd6-96bd-47c38281eaca
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 162cb774e985d490385c68bebab01f48222b3616
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42598317"
---
# <a name="accelerator-key-property"></a>Proprietà Key dei tasti di scelta rapida

Di seguito sono le voci legali per la proprietà chiave della tabella di tasti di scelta rapida:

- Numero intero compreso tra 0 e 255 in formato decimale. Il valore determina se il valore viene trattato come ASCII o ANSI come indicato di seguito:

   - I numeri di cifra vengono sempre interpretati come la chiave corrispondente, anziché come valori ASCII o ANSI.

   - I valori da 1 a 26, preceduti da zero, vengono interpretati come ^ dalla alla ^ Z, che rappresenta il valore ASCII delle lettere dell'alfabeto se premuto con il **Ctrl** tasto mantenuto premuto.

   - I valori da 27 a 32 vengono sempre interpretati come valori decimali a tre cifre 027 e 032.

   - I valori da 033 a 255, preceduto da 0 o non vengono interpretati come valori ANSI.

- Un singolo carattere della tastiera. Caratteri maiuscoli A - Z o i numeri da 0 - 9 può essere ASCII o valori di chiave virtuali; qualsiasi altro carattere è solo ASCII.

- Un singolo carattere della tastiera nell'intervallo A - Z (lettere solo), preceduto da un accento circonflesso (^) (ad esempio ^ C). Si immette il valore ASCII della chiave quando viene premuto con il **Ctrl** tasto mantenuto premuto.

   > [!NOTE]
   > Quando si immette un valore ASCII, le opzioni di proprietà modificatore siano limitate. È l'unica chiave di controllo disponibile per l'uso di **Alt** chiave.

- Qualsiasi identificatore di chiave virtuale valido. La casella di riepilogo a discesa chiave nella tabella di tasti di scelta rapida contiene un elenco di identificatori di chiave virtuali standard.

   > [!TIP]
   > È un altro modo per definire un tasto di scelta rapida per fare doppio clic su una o più voci nella tabella di tasti di scelta rapida, scegliere **digita** dal menu di scelta rapida, quindi premere una delle chiavi o combinazioni di tasti sulla tastiera. Il **digita** comando è disponibile anche la **modificare** menu.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Impostazione delle proprietà dei tasti di scelta rapida](../windows/setting-accelerator-properties.md)  
[Modifica in una tabella dei tasti di scelta rapida](../windows/editing-in-an-accelerator-table.md)  
[Editor tasti di scelta rapida](../windows/accelerator-editor.md)