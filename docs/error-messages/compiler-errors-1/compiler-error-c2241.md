---
title: Errore del compilatore C2241 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2241
dev_langs:
- C++
helpviewer_keywords:
- C2241
ms.assetid: 2f4e2c2c-b95c-4afe-bbe0-4214cd39d140
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 9a41bd97d5e940da73dd22c95a1a984a24126bc3
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2241"></a>Errore del compilatore C2241
'identifier': restrizioni sull'accesso ai membri  
  
 Il codice tenta di accedere a un membro privato o protetto.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Cambiare il livello di accesso del membro.  
  
2.  Dichiarare il membro come `friend` della funzione di accesso.
