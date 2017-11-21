---
title: -ALLOWISOLATION (ricerca di manifesti) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /ALLOWISOLATION
- VC.Project.VCLinkerTool.AllowIsolation
dev_langs: C++
helpviewer_keywords:
- -ALLOWISOLATION linker option
- /ALLOWISOLATION linker option
ms.assetid: 6d41851e-b3c1-4bdf-beaa-031773089d6f
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: c8d6163c6377a6d8c92875b3bb5ba76b07a94d38
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="allowisolation-manifest-lookup"></a>/ALLOWISOLATION (Ricerca di manifesti)
Specifica il comportamento per la ricerca del manifesto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/ALLOWISOLATION[:NO]  
```  
  
## <a name="remarks"></a>Note  
 **/ALLOWISOLATION:No** indica le DLL vengono caricate come se esistesse alcun manifesto e fa sì che il linker imposti il `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` bit dell'intestazione facoltativa `DllCharacteristics` campo.  
  
 **/ALLOWISOLATION** fa sì che il sistema operativo al manifesto ricerche e caricamenti.  
  
 **/ALLOWISOLATION** è l'impostazione predefinita.  
  
 Quando per un file eseguibile è disabilitato l'isolamento, il caricatore di Windows non tenterà di trovare un manifesto dell'applicazione per il processo appena creato. Il nuovo processo non avrà un contesto di attivazione predefinito, anche se è presente un manifesto all'interno del file eseguibile o posizionato nella stessa directory dell'eseguibile con nome *nome eseguibile***. manifest**.  
  
 Per ulteriori informazioni, vedere [Manifest Files Reference](http://msdn.microsoft.com/library/aa375632).  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **Linker** nodo.  
  
4.  Selezionare il **File manifesto** pagina delle proprietà.  
  
5.  Modificare il **Consenti isolamento** proprietà.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)