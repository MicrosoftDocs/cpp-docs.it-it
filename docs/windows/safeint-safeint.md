---
title: "SafeInt::SafeInt | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "SafeInt::SafeInt"
  - "SafeInt"
  - "SafeInt.SafeInt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SafeInt (classe), costruttore"
ms.assetid: 39e6f632-a396-40e6-9ece-cc3d4c5a78ef
caps.latest.revision: 7
caps.handback.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# SafeInt::SafeInt
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruisce un oggetto `SafeInt`.  
  
## Sintassi  
  
```  
SafeInt() throw  
  
SafeInt (  
   const T& i  
) throw ()  
  
SafeInt (  
   bool b  
) throw ()  
  
template <typename U>  
SafeInt (  
   const SafeInt <U, E>& u  
)  
  
I template <typename U>  
SafeInt (  
   const U& i  
)  
```  
  
#### Parametri  
 \[in\] `i`  
 Il valore per il nuovo oggetto `SafeInt`.  Deve trattarsi di un parametro di tipo T o U, a seconda del costruttore.  
  
 \[in\] `b`  
 Il valore booleano per il nuovo oggetto `SafeInt`.  
  
 \[in\] `u`  
 Un `SafeInt` di tipo U.  Il nuovo oggetto `SafeInt` avrà lo stesso valore di `u`, ma sarà di tipo T.  
  
 U  
 Il tipo di dati memorizzati nell'oggetto `SafeInt`.  Può trattarsi di un tipo booleano, carattere, o intero.  Se è un tipo intero, può essere con o senza segno ed essere compreso tra 8 e 64 bit.  
  
## Note  
 Per ulteriori informazioni sui tipi di modelli `T` ed `E` vedere [Classe SafeInt](../windows/safeint-class.md).  
  
 Il parametro di input per il costruttore, `i` o `u`, deve essere un tipo booleano, un carattere, o un intero.  Se è un altro tipo di parametro, la classe `SafeInt` chiama [static\_assert](../cpp/static-assert.md) ad indicare un parametro di input non valido.  
  
 I costruttori che utilizzano il tipo di modello `U` convertono automaticamente il parametro di input al tipo specificato da `T`.  La classe `SafeInt` converte i dati senza alcuna perdita di dati.  Riporta al gestore errori `E` se non è possibile convertire i dati al tipo `T` senza perdita di dati.  
  
 Se si crea un `SafeInt` da un parametro booleano, è necessario inizializzare il valore immediatamente.  Non è possibile creare `SafeInt` utilizzando il codice `SafeInt<bool> sb;`.  Ciò andrà a generare un errore di compilazione.  
  
## Requisiti  
 **Intestazione:** safeint.h  
  
 **Spazio dei nomi:** msl::utilities  
  
## Vedere anche  
 [Libreria SafeInt](../windows/safeint-library.md)   
 [Classe SafeInt](../windows/safeint-class.md)   
 [Classe SafeIntException](../windows/safeintexception-class.md)