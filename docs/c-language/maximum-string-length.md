---
title: "Lunghezza massima della stringa | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "lunghezze, stringhe"
  - "lunghezza massima della stringa"
  - "lunghezza della stringa, numero massimo"
  - "stringhe [C++], lunghezza"
ms.assetid: 99a80e4a-6212-47b7-a6bd-bdf99bd44928
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Lunghezza massima della stringa
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 La compatibilità ANSI richiede al compilatore di accettare un massimo di 509 caratteri in un valore letterale stringa dopo la concatenazione.  La lunghezza massima di un valore letterale stringa consentita in Microsoft C è di circa 2.048 byte.  Nei casi in cui il valore letterale stringa è costituito da parti racchiuse tra virgolette doppie, tuttavia, il preprocessore concatena le parti in una singola stringa e, per ogni riga concatenata, aggiungere al numero di byte totale un ulteriore byte.  
  
 Ad esempio, si consideri il caso di una stringa costituita da 40 righe da 50 caratteri per riga \(2.000 caratteri\) più una riga da 7 caratteri, in cui ogni riga è racchiusa tra virgolette doppie.  I byte totali sono 2.008, ovvero 2.007 più un byte per il carattere di terminazione null.  In fase di concatenazione, viene aggiunto un byte per ognuna delle prime 40 righe.  In questo modo, si ottengono 2.048 byte totali.  Si noti, tuttavia, che se si utilizzano le continuazioni di riga \(\\\), anziché le virgolette doppie, il preprocessore non aggiunge un carattere extra per ogni riga.  
  
 Mentre una stringa singola tra virgolette non può superare i 2048 byte, è possibile costruire un valore letterale stringa di circa 65535 byte, concatenando più stringhe.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Valori letterali stringa C](../c-language/c-string-literals.md)