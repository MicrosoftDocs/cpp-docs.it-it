---
title: Identificatori di classi di archiviazione register | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- register variables
- register storage class
ms.assetid: 7577bf48-88ec-4191-873c-ef4217a4034e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 211f623923286e598f495920bcbdac3a9321b13a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="register-storage-class-specifier"></a>Identificatore di classi di archiviazione register
**Sezione specifica Microsoft**  
  
 Il compilatore Microsoft C/C++ non soddisfa le richieste degli utenti relative alle variabili di registro. Tuttavia, per motivi di portabilità qualsiasi altra semantica associata alla parola chiave **register** viene rispettata dal compilatore. Non è ad esempio possibile applicare l'operatore unario address-of (**&**) a un oggetto registro né usare la parola chiave **register** nelle matrici.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Identificatori di classi di archiviazione per dichiarazioni di livello interno](../c-language/storage-class-specifiers-for-internal-level-declarations.md)