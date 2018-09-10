---
title: Modifica di un simbolo&#39;valore numerico s | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.symbol.changing.value
dev_langs:
- C++
helpviewer_keywords:
- numeric values
- symbols [C++], numeric values
- numeric values, changing symbols
ms.assetid: 468e903b-9c07-4251-ae09-3b6cb754cc2b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: eef16275bcd563a258347f8853a3c705594df99d
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44318674"
---
# <a name="changing-a-symbol39s-numeric-value"></a>Modifica di un simbolo&#39;s valore numerico

Per simboli associati a una sola risorsa, è possibile usare la [finestra proprietà](/visualstudio/ide/reference/properties-window) per modificare il valore di simbolo. È possibile usare la [finestra di dialogo Simboli risorsa](../windows/resource-symbols-dialog-box.md) per modificare il valore dei simboli non attualmente assegnati a una risorsa. Per altre informazioni, vedere [modifica di simboli non assegnati](../windows/changing-unassigned-symbols.md).

### <a name="to-change-a-symbol-value-assigned-to-a-single-resource-or-object"></a>Per modificare il valore di un simbolo assegnato a una singola risorsa o oggetto

1. Nelle [visualizzazione risorse](../windows/resource-view-window.md), selezionare la risorsa.

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Nel **delle proprietà** finestra digitare il nome del simbolo seguito da un segno di uguale e un numero intero nel **ID** casella, ad esempio:

    ```
    IDC_EDITNAME=5100
    ```

Il nuovo valore viene archiviato nel file di intestazione simboli la volta successiva che si salva il progetto. Solo il nome del simbolo rimane visibile nella casella ID; il segno di uguale e il valore non vengono visualizzati dopo essere stati convalidati.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e assegnazione di risorse stringhe alle proprietà.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Restrizioni relative ai valori dei simboli](../windows/symbol-value-restrictions.md)  
[ID simbolo predefiniti](../windows/predefined-symbol-ids.md)