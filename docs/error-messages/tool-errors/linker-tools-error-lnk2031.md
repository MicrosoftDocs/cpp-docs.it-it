---
title: Strumenti del linker LNK2031 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK2031
dev_langs: C++
helpviewer_keywords: LNK2031
ms.assetid: 18ed4b6e-3e75-443c-bbd8-2f6030dc89ee
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2a519b4241c9ffabaeeb387cc8e4997125d57781
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk2031"></a>Errore degli strumenti del linker LNK2031
Impossibile generare p/invoke per nome_decorato "function_declaration"; convenzione di chiamata mancante nei metadati  
  
 Quando si tenta di importare una funzione nativa in un'immagine pure, tenere presente che le convenzioni di chiamata implicite differiscono tra compilazioni pure e native. Per ulteriori informazioni sulle immagini, vedere [codice Pure e verificabile (C + + CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
## <a name="example"></a>Esempio  
 In questo esempio di codice genera un componente con una funzione nativa esportata la cui convenzione di chiamata implicita [cdecl](../../cpp/cdecl.md).  
  
```  
// LNK2031.cpp  
// compile with: /LD  
extern "C" {  
   __declspec(dllexport) int func() { return 3; }  
};  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente crea un client puro che utilizza la funzione nativa. Tuttavia, la convenzione di chiamata in **/clr: pure** è [clrcall](../../cpp/clrcall.md). L'esempio seguente genera l'errore LNK2031.  
  
```  
// LNK2031_b.cpp  
// compile with: /clr:pure LNK2031.lib  
// LNK2031 expected  
extern "C" int func();  
  
int main() {  
   return func();  
}  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente viene illustrato come utilizzare una funzione nativa da un'immagine pure. Si noti la proprietà esplicita **cdecl** identificatore di convenzione di chiamata.  
  
```  
// LNK2031_c.cpp  
// compile with: /clr:pure LNK2031.lib  
extern "C" int __cdecl func();  
  
int main() {  
   return func();  
}  
```