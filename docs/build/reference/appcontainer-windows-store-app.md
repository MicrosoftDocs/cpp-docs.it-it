---
title: -APPCONTAINER (App di Windows Store) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 9a432db5-7640-460b-ab18-6f61fa7daf6f
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 22ca7bec885f20518950626d33f7e3af553d0d52
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="appcontainer-windows-store-app"></a>/APPCONTAINER (applicazione Windows Store)
Specifica se il linker crea un'immagine eseguibile che deve essere eseguita in un contenitore di app.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/APPCONTAINER[:NO]  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, /APPCONTAINER è disattivata.  
  
 Questa opzione consente di modificare un file eseguibile per indicare se l'app deve essere eseguito nell'ambiente di isolamento del processo di appcontainer. Specificare /APPCONTAINER per un'applicazione che deve essere eseguito nell'ambiente di appcontainer, ad esempio, un [!INCLUDE[win8_appstore_long](../../build/reference/includes/win8_appstore_long_md.md)] app. (L'opzione è impostata automaticamente in Visual Studio quando si crea un [!INCLUDE[win8_appstore_long](../../build/reference/includes/win8_appstore_long_md.md)] app da un modello.) Per un'applicazione desktop, specificare /APPCONTAINER:NO o semplicemente omettere l'opzione.  
  
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