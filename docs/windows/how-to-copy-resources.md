---
title: 'Procedura: copiare risorse | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.resvw.resource.copying
- vs.resvw.resource.copying
dev_langs:
- C++
helpviewer_keywords:
- resources [Visual Studio], moving between files
- resources [Visual Studio], copying
- resource files, copying or moving resources between
- resource files, tiling
- .rc files, copying resources between
- rc files, copying resources between
ms.assetid: 65f523e8-017f-4fc6-82d1-083c56d9131f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 4b173be24e9f177a3156f740fcb07240c30fec75
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="how-to-copy-resources"></a>Procedura: copiare risorse
È possibile copiare risorse da un file a un altro senza alcuna modifica oppure è possibile [modificare la lingua o una condizione di una risorsa durante la copia](../windows/how-to-change-the-language-or-condition-of-a-resource-while-copying.md).  
  
 È possibile copiare facilmente le risorse da una risorsa esistente o un file eseguibile per il file di risorse corrente. A questo scopo aprire entrambi i file che contiene risorse nello stesso momento e trascinare elementi da un file oppure copiare e incollare tra i due file. Questo metodo funziona per i file di script (RC) delle risorse e file di risorse modello (con estensione rct), nonché i file eseguibili (.exe).  
  
> [!NOTE]
>  Visual C++ include file di risorse di esempio che è possibile utilizzare nella propria applicazione. Per ulteriori informazioni, vedere [CLIPART: risorse comuni](http://msdn.microsoft.com/en-us/9bac2891-b6b3-49ec-a287-cec850c707e0).  
  
 È possibile utilizzare il metodo di trascinamento e rilascio tra file RC sono aperti [all'esterno del progetto](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).  
  
### <a name="to-copy-resources-between-files-using-the-drag-and-drop-method"></a>Copiare le risorse tra i file utilizzando il metodo di trascinamento e rilascio  
  
1.  Aprire entrambi i file (per ulteriori informazioni, vedere [visualizzazione di risorse in un File all'esterno di un progetto rc](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md)). Ad esempio, aprire Origine1.rc e Origine2.rc.  
  
2.  Nel primo file RC, fare clic sulla risorsa che si desidera copiare. Ad esempio, in Origine1. rc, fare clic su IDD_DIALOG1.  
  
3.  Tenere premuto il tasto CTRL e trascinare la risorsa per il secondo file RC. Ad esempio, trascinare IDD_DIALOG1 da Origine1 Origine2.  
  
    > [!NOTE]
    >  Trascina una risorsa senza tenere premuto il tasto CTRL Sposta la risorsa, anziché copiata.  
  
### <a name="to-copy-resources-using-copy-and-paste"></a>Per copiare le risorse tramite copia e Incolla  
  
1.  Aprire entrambi i file (per ulteriori informazioni, vedere [visualizzazione di risorse in un File all'esterno di un progetto rc](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md)). Ad esempio Origine1. rc e Origine2. rc.  
  
2.  Nel file di origine da cui si desidera copiare una risorsa (ad esempio Origine1. rc), fare doppio clic su una risorsa e scegliere **copia** dal menu di scelta rapida.  
  
3.  Fare clic sul file di risorse in cui si desidera incollare la risorsa (ad esempio Origine2). Scegliere **Incolla** dal menu di scelta rapida.  
  
    > [!NOTE]
    >  È non è possibile trascinare e rilasciare, copiare, tagliare o tra i file di risorse nel progetto (visualizzazione di risorse) e i file RC autonomo (quelli aperti in finestre di documento). È possibile farlo nelle versioni precedenti del prodotto.  
  
    > [!NOTE]
    >  Per evitare conflitti con i valori nel file esistente o i nomi dei simboli, Visual C++ può modificare il valore di simbolo della risorsa trasferita o il nome e valore quando si copia il nuovo file.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: aprire un File di Script di risorsa all'esterno di un progetto (autonomo)](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md)   
 [File di risorse](../windows/resource-files-visual-studio.md)   
 [Editor di risorse](../windows/resource-editors.md)