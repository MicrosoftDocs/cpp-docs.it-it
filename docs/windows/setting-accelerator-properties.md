---
title: Impostazione delle proprietà del tasto di scelta rapida (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- accelerator properties
- properties [C++], accelerator properties
- Type property
- Key property
- Modifier property
- VIRTKEY
- Key property
- ID property
ms.assetid: 0fce9156-3025-4e18-b034-e219a4c65812
ms.openlocfilehash: e1fac31635b7ccc09f9c184cf734fa4f7717cb97
ms.sourcegitcommit: 5beace7dcc6bf0e8b8cc96a930e7424f9daa05cb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/29/2019
ms.locfileid: "55232136"
---
# <a name="setting-accelerator-properties"></a>Impostazione delle proprietà dei tasti di scelta rapida

È possibile impostare le proprietà di tasti di scelta rapida nel [finestra proprietà](/visualstudio/ide/reference/properties-window) in qualsiasi momento. È anche possibile usare la [editor tasti di scelta rapida](../windows/accelerator-editor.md) per modificare le proprietà di tasti di scelta rapida della tabella di tasti di scelta rapida. Le modifiche apportate tramite il **delle proprietà** finestra o il **acceleratore** editor hanno lo stesso risultato: le modifiche vengono applicate immediatamente nella tabella di tasti di scelta rapida.

## <a name="id-property"></a>ID (proprietà)

Il **ID** proprietà fa riferimento a ogni voce della tabella di tasti di scelta rapida nel codice del programma. Questa voce è il valore del comando che riceverà il programma quando l'utente preme il tasto di scelta rapida o una combinazione di tasti. Per rendere un acceleratore quello utilizzato per una voce di menu, verificare i relativi ID lo stesso da (purché l'ID della tabella di tasti di scelta rapida è quello utilizzato per l'ID per la risorsa di menu).

Esistono tre proprietà per ogni ID acceleratore: il **modificatore** proprietà, il **chiave** proprietà e il **tipo** proprietà.

## <a name="modifier-property"></a>Modifier (proprietà)

Il **modificatore** proprietà imposta controllo combinazioni per il tasto di scelta rapida.

> [!NOTE]
> Nel **delle proprietà** finestra, questa proprietà viene visualizzato come separato tre **booleano** proprietà, ognuno dei quali può essere controllata in modo indipendente: **ALT**, **Ctrl**, e **MAIUSC**.

Di seguito sono le voci legali per la **modificatore** proprietà nella tabella di tasti di scelta rapida:

   |Value|Descrizione|
   |-----------|-----------------|
   |**None**|Utente preme solo il **chiave** valore. Questo valore viene utilizzato in modo più efficace con i valori ASCII/ANSI 001 tramite 026, che viene interpretato come ^ dalla alla ^ Z (**Ctrl + B** attraverso **Ctrl + Z**).|
   |**ALT**|L'utente deve premere il **Alt** chiave prima di **chiave** valore.|
   |**CTRL**|L'utente deve premere il **Ctrl** chiave prima di **chiave** valore. Non è valida con tipo ASCII.|
   |**MAIUSC**|L'utente deve premere il **Shift** chiave prima di **chiave** valore.|
   |**Ctrl + Alt**|L'utente deve premere il **Ctrl** chiave e il **Alt** chiave prima il **chiave** valore. Non è valida con tipo ASCII.|
   |**CTRL + MAIUSC**|L'utente deve premere il **Ctrl** chiave e il **MAIUSC** chiave prima il **chiave** valore. Non è valida con tipo ASCII.|
   |**ALT + MAIUSC**|L'utente deve premere il **Alt** chiave e il **MAIUSC** chiave prima il **chiave** valore. Non è valida con tipo ASCII.|
   |**Ctrl + Alt + Maiusc**|L'utente deve premere **Ctrl**, **Alt**, e **MAIUSC** prima il **chiave** valore. Non è valida con tipo ASCII.|

## <a name="key-property"></a>Key (proprietà)

Il **chiave** proprietà imposta il tasto effettivo da usare come tasto di scelta rapida.

Di seguito sono le voci legali per la **chiave** proprietà nella tabella di tasti di scelta rapida:

   |Value|Descrizione|
   |-----------|-----------------|
   |Numero intero compreso tra 0 e 255 in formato decimale.|Il valore determina se il valore viene trattato come ASCII o ANSI come indicato di seguito:<br/><br/>-Cifra numeri vengono sempre interpretati come la chiave corrispondente, anziché come valori ASCII o ANSI.<br/>-I valori da 1 a 26, preceduti da zero, vengono interpretati come ^ dalla alla ^ Z, che rappresenta il valore ASCII delle lettere dell'alfabeto se premuto con il **Ctrl** tasto mantenuto premuto.<br/>-I valori da 27 a 32 vengono sempre interpretati come valori decimali a tre cifre 027 e 032.<br/>-I valori da 033 a 255, preceduto da 0 o non vengono interpretati come valori ANSI.|
   |Un singolo carattere della tastiera.|Caratteri maiuscoli A - Z o i numeri da 0 - 9 può essere ASCII o valori di chiave virtuali; qualsiasi altro carattere è solo ASCII.|
   |Un singolo carattere della tastiera nell'intervallo A - Z (lettere solo), preceduto da un accento circonflesso (^) (ad esempio ^ C).|Questa opzione inserisce il valore ASCII della chiave quando viene premuto con il **Ctrl** tasto mantenuto premuto.|
   |Qualsiasi identificatore di chiave virtuale valido.|La casella di riepilogo a discesa chiave nella tabella di tasti di scelta rapida contiene un elenco di identificatori di chiave virtuali standard.|

> [!NOTE]
> Quando si immette un valore ASCII, le opzioni di proprietà modificatore siano limitate. È l'unica chiave di controllo disponibile per l'uso di **Alt** chiave.

> [!TIP]
> È un altro modo per definire un tasto di scelta rapida per fare doppio clic su una o più voci nella tabella di tasti di scelta rapida, scegliere **digita** dal menu di scelta rapida, quindi premere una delle chiavi o combinazioni di tasti sulla tastiera. Il **digita** comando è disponibile anche la **modificare** menu.

## <a name="type-property"></a>Type (proprietà)

Il **tipo** proprietà determina se la combinazione di tasti di scelta rapida associata all'ID acceleratore viene interpretata come una combinazione di tasto virtuale (VIRTKEY) o un valore di chiave ASCII/ANSI.

- Se il **tipo** proprietà è ASCII, il **modificatore** proprietà può essere solo `None` o `Alt`, oppure può avere un acceleratore che usa il **Ctrl** (della chiave specificato facendo precedere la chiave con un `^`).

- Se il **tipo** proprietà è VIRTKEY, qualsiasi combinazione delle `Modifier` e `Key` valori è valido.

> [!NOTE]
> Se si desidera immettere un valore nella tabella di tasti di scelta rapida e deve essere considerato come ASCII/ANSI, è sufficiente fare clic sui **tipo** per la voce nella tabella e ASCII selezionare dall'elenco a discesa. Tuttavia, se si usa il **digita** comando (**modificare** menu) per specificare il `Key`, è necessario modificare il **tipo** proprietà da VIRTKEY ASCII *prima* immettendo il `Key` codice.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Modifica in una tabella dei tasti di scelta rapida](../windows/editing-in-an-accelerator-table.md)<br/>
[Tasti di scelta rapida predefiniti](../windows/predefined-accelerator-keys.md)<br/>
[Editor di risorse](../windows/resource-editors.md)<br/>
