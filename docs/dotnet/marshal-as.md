---
title: "marshal_as | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "marshal_as"
  - "msclr.interop.marshal_as"
  - "msclr::interop::marshal_as"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "marshal_as (modello) [C++]"
ms.assetid: 2ed717da-2b11-41e5-981d-47d251771989
caps.latest.revision: 17
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# marshal_as
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo metodo converte i dati tra ambienti nativi e gestiti.  
  
## Sintassi  
  
```  
To_Type marshal_as<To_Type>(  
   From_Type input   
);  
```  
  
#### Parametri  
 \[in\] `input`  
 Il valore di cui si desidera eseguire il marshalling a una variabile `To_Type`.  
  
## Valore restituito  
 Una variabile di tipo `To_Type` che è il valore convertito di `input`.  
  
## Note  
 Questo metodo è un modo semplificato per convertire i dati tra tipi nativi e gestiti.  Per determinare i tipi di dati supportati, vedere [Panoramica del marshaling in C\+\+](../dotnet/overview-of-marshaling-in-cpp.md).  Alcune conversioni di dati richiedono un contesto.  È possibile convertire tali tipi di dati utilizzando [Classe marshal\_context](../dotnet/marshal-context-class.md).  
  
 Se si tenta di eseguire il marshalling di una coppia di tipi di dati non supportati, `marshal_as` genererà un errore [C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md) in fase di compilazione.  Per ulteriori informazioni leggere il messaggio fornito con questo errore.  L'errore `C4996` può essere generato per più funzioni, non sono per quelle deprecate.  Un esempio di questo sta tentando di eseguire il marshalling di una coppia di tipi di dati non supportati.  
  
 La libreria del marshalling è costituita da diversi file di intestazione.  Qualunque conversione richiede solo un file, ma è possibile includere file aggiuntivi se sono necessari per altre conversioni.  Per visualizzare quali file siano associati a determinate conversioni, vedere nella tabella in `Marshaling Overview`.  Indipendentemente dalla conversione che si desidera apportare, il requisito dello spazio dei nomi è sempre in vigore.  
  
## Esempio  
 Questo esempio esegue il marshalling da un `const char*` a un tipo di variabile `System::String`.  
  
```  
// marshal_as_test.cpp  
// compile with: /clr  
#include <stdlib.h>  
#include <string.h>  
#include <msclr\marshal.h>  
  
using namespace System;  
using namespace msclr::interop;  
  
int main() {  
   const char* message = "Test String to Marshal";  
   String^ result;  
   result = marshal_as<String^>( message );  
   return 0;  
}  
```  
  
## Requisiti  
 **File di intestazione:** \<msclr\\marshal.h\>, \<msclr\\marshal\_windows.h\>, \<msclr\\marshal\_cppstd.h\>, o \<msclr\\marshal\_atl.h\>  
  
 **Spazio dei nomi:** msclr::interop  
  
## Vedere anche  
 [Panoramica del marshaling in C\+\+](../dotnet/overview-of-marshaling-in-cpp.md)   
 [Classe marshal\_context](../dotnet/marshal-context-class.md)