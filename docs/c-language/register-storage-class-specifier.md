---
title: Identificatori di classi di archiviazione register | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- register variables
- register storage class
ms.assetid: 7577bf48-88ec-4191-873c-ef4217a4034e
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7faced0e92db07a937237a82acf6f0fb9ecd6810
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="register-storage-class-specifier"></a>Identificatore di classi di archiviazione register
**Sezione specifica Microsoft**  
  
 Il compilatore Microsoft C/C++ non soddisfa le richieste degli utenti relative alle variabili di registro. Tuttavia, per motivi di portabilità qualsiasi altra semantica associata alla parola chiave **register** viene rispettata dal compilatore. Non è ad esempio possibile applicare l'operatore unario address-of (**&**) a un oggetto registro né usare la parola chiave **register** nelle matrici.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Identificatori di classi di archiviazione per dichiarazioni di livello interno](../c-language/storage-class-specifiers-for-internal-level-declarations.md)