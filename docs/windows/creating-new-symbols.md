---
title: Creazione di nuovi simboli | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.symbol.creating
dev_langs:
- C++
helpviewer_keywords:
- New Symbol dialog box [C++]
- symbols [C++], creating
ms.assetid: 35168d31-3af6-4ecd-9362-3707d47b53f3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 91d27752af42b861c0374e9d8881db9e121fd5fd
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44315327"
---
# <a name="creating-new-symbols"></a>Creazione di nuovi simboli

Quando si inizia un nuovo progetto, può risultare utile definire i nomi dei simboli necessari prima di creare le risorse a cui verranno assegnati.

### <a name="to-create-a-new-symbol-using-the-resource-symbols-dialog-box"></a>Per creare un nuovo simbolo mediante la finestra di dialogo Simboli risorsa

1. Nel [finestra di dialogo Simboli risorsa](../windows/resource-symbols-dialog-box.md), scegliere **New**.

2. Nel **nome** , digitare un nome di simbolo.

3. Accettare il valore di un simbolo assegnato.

   oppure

   Nel **valore** , digitare un nuovo valore.

4. Fare clic su **OK** per aggiungere il nuovo simbolo al relativo elenco.

Se si digita un nome di simbolo già esistente, verrà visualizzato un messaggio che informa che è già definito un simbolo con lo stesso nome. Non è possibile definire due o più simboli con lo stesso nome, ma è possibile definire simboli diversi con lo stesso valore numerico. Per altre informazioni, vedere [restrizioni relative ai nomi di simbolo](../windows/symbol-name-restrictions.md) e [restrizioni relative ai valori di simbolo](../windows/symbol-value-restrictions.md).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e assegnazione di risorse stringhe alle proprietà.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Visualizzazione di simboli risorsa](../windows/viewing-resource-symbols.md)  
[ID simbolo predefiniti](../windows/predefined-symbol-ids.md)