---
title: "Utilizzo di wmain anzich&#233; di main | Microsoft Docs"
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
  - "wmain"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "main (funzione), e wmain"
  - "wmain (funzione)"
ms.assetid: 7abb1257-b85c-413a-b913-d45b1582a71d
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di wmain anzich&#233; di main
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Nel modello di programmazione Unicode, è possibile definire una versione a caratteri "wide" della funzione **main**.  Utilizzare **wmain** anziché **main** se si desidera scrivere codice portabile conforme alla specifica Unicode.  
  
 I parametri formali vengono dichiarati nella funzione **wmain** utilizzando un formato simile a quello di **main**.  È quindi possibile passare al programma argomenti a caratteri estesi e, se lo si desidera, un puntatore di ambiente a caratteri estesi.  I parametri `argv` ed `envp` in **wmain** sono di tipo `wchar_t*`,  
  
 Se il programma utilizza una funzione **main**, l'ambiente con caratteri multibyte verrà creato dal sistema operativo all'avvio del programma.  Una copia a caratteri "wide" dell'ambiente viene creata solo quando è necessario, ad esempio tramite una chiamata alla funzione [\_wgetenv](../c-runtime-library/reference/getenv-wgetenv.md) o [\_wputenv](../c-runtime-library/reference/putenv-wputenv.md).  Alla prima chiamata a `_wputenv` o alla prima chiamata a `_wgetenv`, se esiste già un ambiente MBCS, verrà creato un ambiente corrispondente per una stringa a caratteri "wide". All'ambiente farà quindi riferimento la variabile globale `_wenviron`, una versione a caratteri "wide" della variabile globale `_environ`.  A questo punto esistono allo stesso tempo due copie dell'ambiente, MBCS e Unicode, che vengono conservate dal sistema operativo per tutta la durata del programma.  
  
 In modo analogo, se il programma utilizza una funzione **wmain**, alla prima chiamata a `_putenv` o a `getenv` viene creato un ambiente MBCS \(ASCII\), a cui fa riferimento la variabile globale `_environ`.  
  
 Per ulteriori informazioni sull'ambiente MBCS, vedere [Set di caratteri a byte singolo e multibyte](../c-runtime-library/single-byte-and-multibyte-character-sets.md) in *Riferimenti alla libreria di runtime.*  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)