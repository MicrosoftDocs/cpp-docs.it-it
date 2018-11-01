---
title: Tasti di scelta rapida proprietà chiave (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- Key property
ms.assetid: d1570cd9-b414-4cd6-96bd-47c38281eaca
ms.openlocfilehash: 0649917900610b8a45c59de05c031ca36d6fcc91
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50529177"
---
# <a name="accelerator-key-property-c"></a>Tasti di scelta rapida proprietà chiave (C++)

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

[Impostazione delle proprietà dei tasti di scelta rapida](../windows/setting-accelerator-properties.md)<br/>
[Modifica in una tabella dei tasti di scelta rapida](../windows/editing-in-an-accelerator-table.md)<br/>
[Editor tasti di scelta rapida](../windows/accelerator-editor.md)