---
title: "region, endregion | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.endregion"
  - "endregion_CPP"
  - "region_CPP"
  - "vc-pragma.region"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "endregion (pragma)"
  - "pragma, endregion"
  - "pragma, area"
  - "region (pragma)"
ms.assetid: c697f807-622f-4796-851b-68a42bbecd84
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# region, endregion
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**\#pragma region** consente di specificare un blocco di codice che è possibile espandere o comprimere tramite la [funzionalità struttura](../Topic/Outlining.md) dell'editor di codice di Visual Studio.  
  
## Sintassi  
  
```  
#pragma region name  
#pragma endregion comment  
```  
  
#### Parametri  
 `comment`\(facoltativo\)  
 Un commento che verrà visualizzato nell'editor di codice.  
  
 *name*\(facoltativo\)  
 Il nome dell'area.  Questo nome verrà visualizzato nell'editor di codice.  
  
## Note  
 **\#pragma endregion** contrassegna la fine di un blocco **\#pragma region**.  
  
 Un blocco `#region` deve terminare con **\#pragma endregion**.  
  
## Esempio  
  
```  
// pragma_directives_region.cpp  
#pragma region Region_1  
void Test() {}  
void Test2() {}  
void Test3() {}  
#pragma endregion Region_1  
  
int main() {}  
```  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)