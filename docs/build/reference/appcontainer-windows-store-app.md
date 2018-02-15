---
title: /APPCONTAINER (App di Store UWP/Microsoft) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 9a432db5-7640-460b-ab18-6f61fa7daf6f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1cc6e1d4c6e18cd2118571e57f671f85a0a3fb55
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="appcontainer-microsoft-store-app"></a>/APPCONTAINER (applicazione di Microsoft Store)
Specifica se il linker crea un'immagine eseguibile che deve essere eseguita in un contenitore di app.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/APPCONTAINER[:NO]  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, /APPCONTAINER è disattivata.  
  
 Questa opzione consente di modificare un file eseguibile per indicare se l'app deve essere eseguito nell'ambiente di isolamento del processo di appcontainer. Specificare /APPCONTAINER per un'applicazione che deve essere eseguito nell'ambiente di appcontainer, ad esempio, un'app della piattaforma UWP (Universal Windows) o Windows Phone 8. x. (L'opzione è impostata automaticamente in Visual Studio quando si crea un'app di Windows universale da un modello.) Per un'applicazione desktop, specificare /APPCONTAINER:NO o semplicemente omettere l'opzione.  
  
 È stata introdotta l'opzione /APPCONTAINER in [!INCLUDE[win8](../../build/reference/includes/win8_md.md)].  
  
### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **Linker** nodo.  
  
4.  Selezionare il **riga di comando** pagina delle proprietà.  
  
5.  In **opzioni aggiuntive**, immettere `/APPCONTAINER` o `/APPCONTAINER:NO`.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)