---
title: -MANIFESTUAC (informazioni dell'account vengono incorporati nel manifesto) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.UACUIAccess
- VC.Project.VCLinkerTool.UACExecutionLevel
- VC.Project.VCLinkerTool.EnableUAC
dev_langs:
- C++
helpviewer_keywords:
- /MANIFESTUAC linker option
- MANIFESTUAC linker option
- -MANIFESTUAC linker option
ms.assetid: 2d243c39-fa13-493c-b56f-d0d972a1603a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 564c17336936866750d05137a7bcd101b3a6534d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="manifestuac-embeds-uac-information-in-manifest"></a>/MANIFESTUAC (incorporazione delle informazioni sul controllo dell'account utente nel manifesto)
Specifica se le informazioni di Controllo dell'account utente sono incorporate nel manifesto del programma.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/MANIFESTUAC  
/MANIFESTUAC:NO  
/MANIFESTUAC:fragment  
/MANIFESTUAC:level=_level  
/MANIFESTUAC:uiAccess=_uiAccess  
```  
  
#### <a name="parameters"></a>Parametri  
 `fragment`  
 Stringa che contiene il `level` e `uiAccess` valori. Per ulteriori informazioni, vedere la sezione Osservazioni più avanti in questo argomento.  
  
 `_level`  
 Uno dei *asInvoker*, *highestAvailable*, o *requireAdministrator*. Il valore predefinito asInvoker. Per ulteriori informazioni, vedere la sezione Osservazioni più avanti in questo argomento.  
  
 `_uiAccess`  
 `true` se si desidera che l'applicazione ignori i livelli di protezione dell'interfaccia utente e indirizzi l'input verso finestre con un livello di autorizzazione superiore sul desktop; in caso contrario `false`. Il valore predefinito è `false`. Impostare su `true` solo per le applicazioni di accessibilità di interfaccia utente.  
  
## <a name="remarks"></a>Note  
 Se si specificano più opzioni /MANIFESTUAC sulla riga di comando, quella immessa per ultima ha la precedenza.  
  
 Le scelte per /MANIFESTUAC: Level sono i seguenti:  
  
-   `asInvoker`: L'applicazione verrà eseguita con le stesse autorizzazioni del processo che è stato avviato. L'applicazione può essere elevato a un livello di autorizzazione superiore selezionando **Esegui come amministratore**.  
  
-   highestAvailable: l'applicazione verrà eseguita con il massimo livello di autorizzazione che è possibile. Se l'utente che avvia l'applicazione è un membro del gruppo Administrators, questa opzione è identico requireAdministrator. Se il livello di autorizzazione disponibili più elevato è superiore al livello del processo di apertura, il sistema richiederà le credenziali.  
  
-   requireAdministrator: l'applicazione verrà eseguita con autorizzazioni di amministratore. L'utente che avvia l'applicazione deve essere un membro del gruppo Administrators. Se il processo di apertura non è in esecuzione con autorizzazioni amministrative, il sistema richiederà le credenziali.  
  
 È possibile specificare i valori di livello e l'accesso all'interfaccia utente in un unico passaggio utilizzando l'opzione /MANIFESTUAC: Fragment. Il frammento deve essere nel formato seguente:  
  
```  
"level=[ asInvoker | highestAvailable | requireAdministrator ] uiAccess=[ true | false ]"  
```  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **Linker** nodo.  
  
4.  Selezionare il **File manifesto** pagina delle proprietà.  
  
5.  Modificare il **abilitare controllo Account utente (UAC)**, **il livello di esecuzione controllo dell'account utente**, e **protezione interfaccia utente ignorata UAC** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EnableUAC%2A>, <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.UACExecutionLevel%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.UACUIAccess%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)