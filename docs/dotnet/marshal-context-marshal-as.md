---
title: marshal_context::marshal_as | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- marshal_context::marshal_as
- marshal_context.marshal_as
- msclr.interop.marshal_context.marshal_as
- msclr::interop::marshal_context::marshal_as
dev_langs:
- C++
helpviewer_keywords:
- marshal_context class [C++], operations
ms.assetid: 24a1afee-51c0-497c-948c-f77fe43635c8
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: e56e225d136fb02445eeeb398937adc075f2dae7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="marshalcontextmarshalas"></a>marshal_context::marshal_as
Effettua il marshalling su un oggetto dati specifico per convertirlo tra un tipo di dati gestito e un tipo nativo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
To_Type marshal_as<To_Type>(  
   From_Type input   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `input`  
 Il valore che si desidera effettuare il marshalling di un `To_Type` variabile.  
  
## <a name="return-value"></a>Valore restituito  
 Una variabile di tipo `To_Type` che rappresenta il valore convertito di `input`.  
  
## <a name="remarks"></a>Note  
 Questa funzione effettua il marshalling di un oggetto dati specifico. Utilizzare questa funzione solo con le conversioni indicate dalla tabella in [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md).  
  
 Se si tenta di effettuare il marshalling di una coppia di tipi di dati che non sono supportati, `marshal_as` genererà un errore [l'avviso C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md) in fase di compilazione. Leggere il messaggio fornito con l'errore per ulteriori informazioni. Il `C4996` errore può essere generato per le funzioni più semplicemente deprecate. Due condizioni che generano questo errore stanno tentando di eseguire il marshalling di una coppia di tipi di dati che non sono supportati e stanno tentando di utilizzare `marshal_as` per una conversione che richiede un contesto.  
  
 La libreria del marshalling è costituito da diversi file di intestazione. Qualsiasi conversione richiede un solo file, ma se è necessario per le altre conversioni, è possibile includere file aggiuntivi. Nella tabella in `Marshaling Overview in C++` è indicato quale file di marshalling deve essere incluso per ogni conversione.  
  
## <a name="example"></a>Esempio  
 In questo esempio viene creato un contesto per il marshalling da un tipo di variabile `System::String` a un tipo di variabile `const char *`. I dati convertiti non saranno validi dopo la riga che elimina il contesto.  
  
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
  
## <a name="requirements"></a>Requisiti  
 **File di intestazione:** \<msclr\marshal.h >, \<msclr\marshal_windows.h >, \<msclr\marshal_cppstd.h >, o \<msclr\marshal_atl.h >  
  
 **Namespace:** msclr::interop  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md)   
 [marshal_as](../dotnet/marshal-as.md)   
 [Classe marshal_context](../dotnet/marshal-context-class.md)