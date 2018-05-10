---
title: 'Procedura: creare un File di Script di risorsa | Documenti Microsoft'
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
ms.openlocfilehash: a15352640a39ff6adc3b5a956a1f32c9fd414272
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="how-to-create-a-resource-script-file"></a>Procedura: creare un file script di risorsa
> [!NOTE]
>  L'editor delle risorse non è disponibile nelle edizioni Express.  
>   
>  Questo materiale si riferisce alle applicazioni desktop di Windows. I progetti in linguaggi .NET non usano file di script della risorsa. Per altre informazioni, vedere [File di risorse](../windows/resource-files-visual-studio.md).  
  
### <a name="to-create-a-new-resource-script-rc-file"></a>Per creare un nuovo file script di risorsa (RC)  
  
1.  Selezionare la cartella del progetto esistente in `Solution Explorer`, ad esempio "MyProject".  
  
    > [!NOTE]
    >  Non confondere la cartella del progetto con la cartella Soluzione in Esplora soluzioni. Se si seleziona la cartella Soluzione, le opzioni della finestra di dialogo **Aggiungi nuovo elemento** , nel passaggio 3, saranno diverse.  
  
2.  Nel menu **Progetto** fare clic su **Aggiungi nuovo elemento**.  
  
3.  Nella finestra di dialogo **Aggiungi nuovo elemento** fare clic sulla cartella **Visual C++** , quindi scegliere **File di risorse (.rc)** nel riquadro di destra.  
  
4.  Specificare un nome per il file di script della risorsa nella casella di testo **Nome** , quindi fare clic su **Apri**.  
  
 A questo punto è possibile [creare](../windows/how-to-create-a-resource.md) e aggiungere nuove risorse al file RC.  
  
> [!NOTE]
>  Si può aggiungere uno script di risorsa (file RC) solo a un progetto esistente caricato nell'IDE di Visual Studio. Non è possibile creare un file RC autonomo, esterno al progetto. È possibile creare[modelli di risorse](../windows/how-to-use-resource-templates.md) (file con estensione rct) in qualsiasi momento.  
  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [File di risorse](../windows/resource-files-visual-studio.md)   
 [Editor di risorse](../windows/resource-editors.md)