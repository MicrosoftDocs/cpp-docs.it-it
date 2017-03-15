---
title: "Utilizzo di wmain | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "wmain (funzione)"
ms.assetid: d0300812-adc4-40c6-bba3-b2da25468c80
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Utilizzo di wmain
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Nel modello di programmazione Unicode, è possibile definire una versione a caratteri "wide" della funzione **main**.  Utilizzare **wmain** anziché **main** se si desidera scrivere codice portabile conforme al modello di programmazione Unicode.  
  
## Sintassi  
  
```  
wmain( int argc, wchar_t *argv[ ], wchar_t *envp[ ] )  
```  
  
## Note  
 I parametri formali vengono dichiarati nella funzione **wmain** utilizzando un formato simile a quello di **main**.  È quindi possibile passare al programma argomenti a caratteri estesi e, se lo si desidera, un puntatore di ambiente a caratteri estesi.  I parametri `argv` ed `envp` in **wmain** sono di tipo `wchar_t*`,  Ad esempio:  
  
 Se il programma utilizza una funzione **main**, l'ambiente con caratteri multibyte verrà creato dalla libreria di runtime all'avvio del programma.  Una copia a caratteri estesi dell'ambiente viene creata solo quando è necessario, ad esempio tramite una chiamata alla funzione `_wgetenv` o `_wputenv`.  Alla prima chiamata a `_wputenv` o alla prima chiamata a `_wgetenv`, se esiste già un ambiente MBCS, verrà creato un ambiente corrispondente per una stringa a caratteri "wide". All'ambiente farà quindi riferimento la variabile globale `_wenviron`, una versione a caratteri "wide" della variabile globale `_environ`.  A questo punto esistono allo stesso tempo due copie dell'ambiente, MBCS e Unicode, che vengono conservate dal sistema operativo per tutta la durata del programma.  
  
 In modo analogo, se il programma utilizza una funzione **wmain**, all'avvio del programma viene creato un ambiente a caratteri estesi, a cui fa riferimento la variabile globale `_wenviron`.  Alla prima chiamata a `_putenv` o `getenv` viene creato un ambiente MBCS \(ASCII\) a cui fa riferimento la variabile globale `_environ`.  
  
 Per ulteriori informazioni sull'ambiente MBCS, vedere [Internazionalizzazione](../c-runtime-library/internationalization.md) in *Riferimenti alla libreria di runtime*.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Funzione main ed esecuzione di programmi](../c-language/main-function-and-program-execution.md)