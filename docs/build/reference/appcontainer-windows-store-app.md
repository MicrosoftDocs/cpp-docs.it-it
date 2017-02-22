---
title: "/APPCONTAINER (applicazione Windows Store) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 9a432db5-7640-460b-ab18-6f61fa7daf6f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# /APPCONTAINER (applicazione Windows Store)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica se tramite il linker viene creata un'immagine eseguibile che deve essere eseguita in un contenitore di applicazioni.  
  
## Sintassi  
  
```  
/APPCONTAINER[:NO]  
```  
  
## Note  
 Per impostazione predefinita, \/APPCONTAINER è disattivato.  
  
 Questa opzione modifica un eseguibile per indicare se l'applicazione deve essere eseguita nell'ambiente di isolamento del processo di appcontainer.  Specificare \/APPCONTAINER per un'applicazione che deve essere eseguita nell'ambiente appcontainer, ad esempio un'applicazione [!INCLUDE[win8_appstore_long](../../build/reference/includes/win8_appstore_long_md.md)]. L'opzione è impostata automaticamente in Visual Studio quando si crea un'app [!INCLUDE[win8_appstore_long](../../build/reference/includes/win8_appstore_long_md.md)] da un modello. Per un'applicazione desktop, specificare \/APPCONTAINER:NO oppure omettere semplicemente l'opzione.  
  
 L'opzione \/APPCONTAINER è stata introdotta in [!INCLUDE[win8](../../build/includes/win8_md.md)].  
  
### Per impostare questa opzione del linker in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per ulteriori informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **Linker**.  
  
4.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
5.  In **Opzioni aggiuntive** immettere `/APPCONTAINER` o `/APPCONTAINER:NO`.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)