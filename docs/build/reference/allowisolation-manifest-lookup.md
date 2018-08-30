---
title: -ALLOWISOLATION (ricerca di manifesti) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /ALLOWISOLATION
- VC.Project.VCLinkerTool.AllowIsolation
dev_langs:
- C++
helpviewer_keywords:
- -ALLOWISOLATION linker option
- /ALLOWISOLATION linker option
ms.assetid: 6d41851e-b3c1-4bdf-beaa-031773089d6f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 62f467ff467d785d17601737436e0eb1ff972f37
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43205493"
---
# <a name="allowisolation-manifest-lookup"></a>/ALLOWISOLATION (Ricerca di manifesti)
Specifica il comportamento per la ricerca del manifesto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/ALLOWISOLATION[:NO]  
```  
  
## <a name="remarks"></a>Note  
 **/ALLOWISOLATION:No** indica che le DLL vengono caricate come se esistesse alcun manifesto e fa sì che il linker imposti il `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` bit dell'intestazione facoltativa `DllCharacteristics` campo.  
  
 **/ALLOWISOLATION** fa sì che il sistema operativo per le ricerche e caricamenti del manifesto.  
  
 **/ALLOWISOLATION** è il valore predefinito.  
  
 Quando l'isolamento è disabilitato per un file eseguibile, il caricatore di Windows non tenterà di trovare un manifesto dell'applicazione per il processo appena creato. Il nuovo processo non avrà un contesto di attivazione predefinito, anche se non esiste un manifesto all'interno dell'eseguibile o nella stessa directory dell'eseguibile con nome <em>nome-eseguibile</em>**. manifest**.  
  
 Per altre informazioni, vedere [Manifest Files Reference](/windows/desktop/SbsCs/manifest-files-reference).  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere la **Linker** nodo.  
  
4.  Selezionare il **Manifest File** pagina delle proprietà.  
  
5.  Modificare il **consentire isolamento** proprietà.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)