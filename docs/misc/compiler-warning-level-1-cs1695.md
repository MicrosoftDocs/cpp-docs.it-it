---
title: "Avviso del compilatore (livello 1) CS1695 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1695"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1695"
ms.assetid: cc4e4d00-0618-400d-985b-90968e98772c
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1695
Sintassi \#pragma checksum non valida: dovrebbe essere \#pragma checksum "nomefile" "{XXXXXXXX\-XXXX\-XXXX\-XXXX\-XXXXXXXXXXXX}" "XXXX..."  
  
 Questo errore non viene visualizzato di frequente perché in genere il checksum viene inserito in fase di esecuzione, se si genera il codice tramite le API Code DOM.  
  
 Tuttavia, se si modifica questa istruzione `#pragma` e si commette un errore nella digitazione del GUID o del checksum, verrà visualizzato l'errore. Durante il controllo sintattico, il compilatore non convalida le modifiche inserite in un GUID corretto, ma verifica che il numero di cifre e delimitatori sia quello previsto e che le cifre siano in formato esadecimale. Analogamente, controlla che il checksum contenga un numero pari di cifre e che queste ultime siano in formato esadecimale.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1695.  
  
```  
// CS1695.cs #pragma checksum "12345"  // CS1695 public class Test { static void Main() { } }  
```