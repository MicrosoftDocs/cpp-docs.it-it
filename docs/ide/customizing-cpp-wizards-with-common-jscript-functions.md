---
title: "Personalizzazione delle procedure guidate C++ con funzioni comuni JScript | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "metodi Jscript per procedure guidate, creazione di procedure guidate C++"
ms.assetid: c602978f-a2c4-462f-85c3-50b5897bec46
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Personalizzazione delle procedure guidate C++ con funzioni comuni JScript
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si crea un progetto di procedura guidata con la [Creazione guidata personalizzata](../ide/creating-a-custom-wizard.md), nel progetto è incluso il file Common.js.  Se si specifica un'interfaccia utente per la procedura guidata, il progetto contiene anche le pagine HTML che specificano il linguaggio script JScript e includono il file Common.js, come indicato di seguito:  
  
```  
<SCRIPT ID="INCLUDE_COMMON" LANGUAGE ="JSCRIPT"></SCRIPT>  
```  
  
 La procedura guidata crea inoltre un file univoco denominato Default.js.  Le funzioni JScript possono essere personalizzate nel file Default.js.  Per ulteriori informazioni, vedere [Il file JScript](../ide/jscript-file.md).  
  
 Common.js contiene funzioni che è possibile chiamare da ogni pagina HTML della procedura guidata e dal file Default.js.  Se si desidera utilizzare le stesse funzioni in più procedure guidate, è possibile utilizzare queste funzioni in Common.js.  
  
## Vedere anche  
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)