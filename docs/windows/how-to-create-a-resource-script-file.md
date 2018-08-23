---
title: 'Procedura: creare un File di Script di risorsa | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- rc files, creating
- .rc files, creating
- resource script files, creating
ms.assetid: 82be732a-cdcd-4a58-8de7-976d1418f86b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8b07efbd4f1434992c76de2b7e959f4578d60096
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42608737"
---
# <a name="how-to-create-a-resource-script-file"></a>Procedura: creare un file script di risorsa

> [!NOTE]
> Il **Editor di risorse** non è disponibile nelle edizioni Express.
>
> Questo materiale si riferisce alle applicazioni desktop di Windows. I progetti in linguaggi .NET non usano file di script della risorsa. Per altre informazioni, vedere [File di risorse](../windows/resource-files-visual-studio.md).

### <a name="to-create-a-new-resource-script-rc-file"></a>Per creare un nuovo file script di risorsa (RC)

1. Spostare lo stato attivo nella cartella del progetto esistente in **Esplora soluzioni**, ad esempio, `MyProject`.

   > [!NOTE]
   > Non confondere la cartella del progetto con la cartella della soluzione in **Esplora soluzioni**. Se si seleziona il **soluzione** cartella, le scelte effettuate nel **Aggiungi nuovo elemento** (nel passaggio 3) finestra di dialogo sarà diverso.

2. Nel menu **Progetto** fare clic su **Aggiungi nuovo elemento**.

3. Nella finestra di dialogo **Aggiungi nuovo elemento** fare clic sulla cartella **Visual C++** , quindi scegliere **File di risorse (.rc)** nel riquadro di destra.

4. Specificare un nome per il file di script della risorsa nella casella di testo **Nome** , quindi fare clic su **Apri**.

A questo punto è possibile [creare](../windows/how-to-create-a-resource.md) e aggiungere nuove risorse al file RC.

> [!NOTE]
> Si può aggiungere uno script di risorsa (file RC) solo a un progetto esistente caricato nell'IDE di Visual Studio. Non è possibile creare un file RC autonomo, esterno al progetto. È possibile creare[modelli di risorse](../windows/how-to-use-resource-templates.md) (file con estensione rct) in qualsiasi momento.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[File di risorse](../windows/resource-files-visual-studio.md)  
[Editor di risorse](../windows/resource-editors.md)