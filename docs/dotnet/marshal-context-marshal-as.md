---
title: "marshal_context::marshal_as | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "marshal_context::marshal_as"
  - "marshal_context.marshal_as"
  - "msclr.interop.marshal_context.marshal_as"
  - "msclr::interop::marshal_context::marshal_as"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "marshal_context (classe) [C++], operazioni"
ms.assetid: 24a1afee-51c0-497c-948c-f77fe43635c8
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# marshal_context::marshal_as
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esegue il marshalling su un oggetto dati specifico per convertirlo tra un tipo di dati gestito e nativo.  
  
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
 Questa funzione effettua il marshalling di un oggetto dati specifico.  Utilizzare questa funzione solo con le conversioni lette dalla tabella in [Panoramica del marshaling in C\+\+](../dotnet/overview-of-marshaling-in-cpp.md).  
  
 Se si tenta di eseguire il marshalling di una coppia di tipi di dati non supportati, `marshal_as` genererà un errore [C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md) in fase di compilazione.  Per ulteriori informazioni leggere il messaggio fornito con questo errore.  L'errore `C4996` può essere generato per più funzioni, non sono per quelle deprecate.  Due condizioni che generano l'errore stanno tentando di eseguire il marshalling di una coppia di tipi di dati che non sono supportate tentano di utilizzare `marshal_as` per una conversione che richiede un contesto.  
  
 La libreria del marshalling è costituita da diversi file di intestazione.  Qualunque conversione richiede solo un file, ma è possibile includere file aggiuntivi se sono necessari per altre conversioni.  La tabella in `Marshaling Overview in C++` indica quale file di marshalling deve essere incluso per ogni conversione.  
  
## Esempio  
 In questo esempio viene creato un contesto per il marshalling da `System::String` a un tipo variabile `const char *`.  I dati convertiti non saranno validi dopo la riga che elimina il contesto.  
  
```  
// marshal_context_test.cpp  
// compile with: /clr  
#include <stdlib.h>  
#include <string.h>  
#include <msclr\marshal.h>  
  
using namespace System;  
using namespace msclr::interop;  
  
int main() {  
   marshal_context^ context = gcnew marshal_context();  
   String^ message = gcnew String("Test String to Marshal");  
   const char* result;  
   result = context->marshal_as<const char*>( message );  
   delete context;  
   return 0;  
}  
```  
  
## Requisiti  
 **File di intestazione:** \<msclr\\marshal.h\>, \<msclr\\marshal\_windows.h\>, \<msclr\\marshal\_cppstd.h\>, o \<msclr\\marshal\_atl.h\>  
  
 **Spazio dei nomi:** msclr::interop  
  
## Vedere anche  
 [Panoramica del marshaling in C\+\+](../dotnet/overview-of-marshaling-in-cpp.md)   
 [marshal\_as](../dotnet/marshal-as.md)   
 [Classe marshal\_context](../dotnet/marshal-context-class.md)