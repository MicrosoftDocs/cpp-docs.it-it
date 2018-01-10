---
title: NELLE SEZIONI (C/C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: SECTIONS
dev_langs: C++
helpviewer_keywords: SECTIONS .def file statement
ms.assetid: 7b974366-9ef5-4e57-bbcc-73a1df6f8857
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0ab2f021a53e8ae685891863500feb3873e13e2e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="sections-cc"></a>SECTIONS (C/C++)
Introduce una sezione di uno o più `definitions` che sono identificatori di accesso per sezioni nel file di output del progetto.  
  
```  
SECTIONS  
definitions  
```  
  
## <a name="remarks"></a>Note  
 Ogni definizione deve essere riportata in una riga separata. Il `SECTIONS` parola chiave può essere sulla stessa riga della prima definizione o su una riga precedente. Il file con estensione DEF può contenere uno o più `SECTIONS` istruzioni.  
  
 Questo `SECTIONS` istruzione imposta gli attributi per uno o più sezioni nel file di immagine e può essere utilizzato per eseguire l'override gli attributi predefiniti per ogni tipo di sezione.  
  
 Il formato per `definitions` è:  
  
 `.section_name specifier`  
  
 dove `.section_name` è il nome di una sezione dell'immagine del programma e `specifier` è uno o più dei seguenti modificatori di accesso:  
  
|Modificatore|Descrizione|  
|--------------|-----------------|  
|`EXECUTE`|La sezione è eseguibile|  
|`READ`|Consente operazioni di lettura sui dati|  
|`SHARED`|Condivide la sezione tra tutti i processi che caricano l'immagine|  
|`WRITE`|Consente operazioni di scrittura sui dati|  
  
 Separare i nomi degli identificatori con uno spazio. Ad esempio:  
  
```  
SECTIONS  
.rdata READ WRITE  
```  
  
 `SECTIONS`Contrassegna l'inizio di un elenco di sezione `definitions`. Ogni `definition` deve essere su una riga separata. Il `SECTIONS` parola chiave può essere sulla stessa riga del primo `definition` o su una riga precedente. Il file con estensione DEF può contenere uno o più `SECTIONS` istruzioni. Il `SEGMENTS` (parola chiave) è supportato come sinonimo di `SECTIONS`.  
  
 Le versioni precedenti di Visual C++ supportate:  
  
```  
section [CLASS 'classname'] specifier  
```  
  
 Il `CLASS` (parola chiave) è supportato per compatibilità, ma viene ignorato.  
  
 È un metodo equivalente per specificare gli attributi di sezione con il [/sezione](../../build/reference/section-specify-section-attributes.md) opzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)