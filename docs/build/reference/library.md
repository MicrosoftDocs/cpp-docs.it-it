---
title: LIBRERIA | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: LIBRARY
dev_langs: C++
helpviewer_keywords: LIBRARY .def file statement
ms.assetid: 1d7ccc92-e088-4ef7-9ef0-25c3862cc051
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 71637c83eda0ee641a4b66d94ba113162baa7bf2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="library"></a>LIBRARY
Indica a LINK per creare una DLL. Allo stesso tempo, verrà creata una libreria di importazione, a meno che non viene utilizzato un file. exp nella compilazione.  
  
```  
LIBRARY [library][BASE=address]  
```  
  
## <a name="remarks"></a>Note  
 Il *libreria* argomento specifica il nome della DLL. È inoltre possibile utilizzare il [/out](../../build/reference/out-output-file-name.md) l'opzione del linker per specificare il nome della DLL output.  
  
 La BASE =*indirizzo* argomento consente di impostare l'indirizzo di base che utilizza il sistema operativo per caricare la DLL. Questo argomento sostituisce la posizione predefinita della 0x10000000 DLL. Vedere la descrizione del [/base](../../build/reference/base-base-address.md) opzione per informazioni dettagliate sugli indirizzi di base.  
  
 È necessario utilizzare il [/DLL](../../build/reference/dll-build-a-dll.md) l'opzione del linker quando si compila una DLL.  
  
## <a name="see-also"></a>Vedere anche  
 [Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)