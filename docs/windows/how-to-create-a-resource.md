---
title: 'Procedura: creare una risorsa | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- toolbars [C++], resources
- resource toolbars
- resources [Visual Studio], creating
ms.assetid: aad44914-9145-45a3-a7d8-9de89b366716
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 771b7d91c4c5cfdb66908870675ab5cf53f2fdd4
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43221020"
---
# <a name="how-to-create-a-resource"></a>Procedura: creare una risorsa

> [!NOTE]
> **Visualizzazione risorse** non è supportato nelle edizioni Express.

### <a name="to-create-a-new-resource-in-resource-view"></a>Per creare una nuova risorsa in Visualizzazione risorse

1. Con lo stato attivo sul file RC in [visualizzazione risorse](../windows/resource-view-window.md), fare clic sui **modificare** dal menu e scegliere **Aggiungi risorsa** (oppure fare clic sul file RC in **visualizzazione risorse** e scegliere **Aggiungi risorsa** dal menu di scelta rapida).

   > [!NOTE] 
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Nella [finestra di dialogo Aggiungi risorsa](../windows/add-resource-dialog-box.md)scegliere il tipo di risorsa che si vuole aggiungere al progetto.

### <a name="to-create-a-new-resource-in-solution-explorer"></a>Per creare una nuova risorsa in Esplora soluzioni

1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sulla cartella del progetto e scegliere **Aggiungi**, quindi **Aggiungi risorsa** dal menu di scelta rapida.

   Se nel progetto non è già presente un file RC, ne verrà creato uno con questo passaggio. È possibile ripetere questo passaggio per aggiungere tipi di risorse specifici al nuovo file RC.

2. Nella [finestra di dialogo Aggiungi risorsa](../windows/add-resource-dialog-box.md)scegliere il tipo di risorsa che si vuole aggiungere al progetto.

### <a name="to-create-a-new-resource-in-class-view"></a>Per creare una nuova risorsa in Visualizzazione classi

1. Nelle [Visualizzazione classi](https://msdn.microsoft.com/8d7430a9-3e33-454c-a9e1-a85e3d2db925), fare doppio clic su classe e scegliere **Add**, quindi fare clic su **Aggiungi risorsa** dal menu di scelta rapida.

2. Nella [finestra di dialogo Aggiungi risorsa](../windows/add-resource-dialog-box.md)scegliere il tipo di risorsa che si vuole aggiungere al progetto.

### <a name="to-create-a-new-resource-from-the-project-menu"></a>Per creare una nuova risorsa dal menu Progetto

1. Scegliere **Aggiungi risorsa** dal menu **Progetto**.

Quando si crea una nuova risorsa, Visual C++ assegna un nome univoco, ad esempio, `IDD_Dialog1`. È possibile personalizzare questo ID risorsa modificando le proprietà della risorsa nell'editor di risorse associato oppure nella [finestra Proprietà](/visualstudio/ide/reference/properties-window).

È possibile creare una risorsa come nuova risorsa predefinita, indipendente da un modello, oppure come risorsa basata su un [modello](../windows/how-to-use-resource-templates.md).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[File di risorse](../windows/resource-files-visual-studio.md)  
[Editor di risorse](../windows/resource-editors.md)  
[Finestra di dialogo Aggiungi risorsa](../windows/add-resource-dialog-box.md)