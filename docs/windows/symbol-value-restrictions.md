---
title: Restrizioni relative ai valori dei simboli | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.symbol.restrictions.value
dev_langs:
- C++
helpviewer_keywords:
- symbols [C++], value restrictions
- restrictions, symbol values
ms.assetid: 32467ec3-690b-4cd0-a4d0-7d189a3296cb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6b174e46df7822ddf5ffbc747d0a7eb3cd71245e
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44315405"
---
# <a name="symbol-value-restrictions"></a>Restrizioni relative ai valori dei simboli

Il valore di un simbolo può essere qualsiasi numero intero espresso in modo normale per le direttive #define per il preprocessore. Di seguito sono riportati alcuni esempi di valori di simboli:

```
18
4001
0x0012
-3456
```

I valori dei simboli per le risorse (tasti di scelta rapida, bitmap, cursori, finestre di dialogo, icone, menu, tabelle di stringhe e informazioni sulla versione) devono essere numeri decimali compresi tra 0 e 32.767, ma non possono essere valori esadecimali. I valori dei simboli per gli elementi delle risorse, quali i controlli delle finestre di dialogo o le singole stringhe nella tabella di stringhe, possono essere compresi tra 0 e 65.534 oppure tra -32.768 e 32.767.

I simboli delle risorse sono numeri a 16 bit. È possibile immetterli come valori con o senza segno, ma vengono usati internamente come Unsigned Integer. Per i numeri negativi viene pertanto eseguito il cast ai corrispondenti valori positivi.

Di seguito sono riportate alcune restrizioni relative ai valori dei simboli:

- L'ambiente di sviluppo Visual Studio e MFC usano alcuni intervalli di numeri per scopi specifici. Tutti i numeri con il bit più significativo impostato (da -32.768 a -1 oppure da 32.768 a 65.534, a seconda del segno) sono riservati da MFC.

- Non è possibile definire il valore di un simbolo mediante altre stringhe di simbolo. Non è ad esempio supportata la seguente definizione di simbolo:

    ```cpp
    #define IDC_MYEDIT  IDC_OTHEREDIT  //not supported
    ```

- Non è possibile usare macro del preprocessore con argomenti come definizioni dei valori. Ad esempio:

    ```cpp
    #define   IDD_ABOUT  ID(7) //not supported
    ```

   non è un'espressione valida indipendentemente dal valore valutato da `ID` in fase di compilazione.

- L'applicazione potrebbe disporre di un file esistente contenente simboli definiti con espressioni. Per altre informazioni su come includere i simboli come simboli di sola lettura, vedere [simboli usando condivisi (di sola lettura) o calcolati](../windows/including-shared-read-only-or-calculated-symbols.md).

Per altre informazioni sugli intervalli di numeri, vedere [TN023: risorse MFC Standard](../mfc/tn023-standard-mfc-resources.md).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Modifica del valore numerico di un simbolo](../windows/changing-a-symbol-s-numeric-value.md)  
[Restrizioni relative ai nomi dei simboli](../windows/symbol-name-restrictions.md)  
[ID simbolo predefiniti](../windows/predefined-symbol-ids.md)