---
title: marshal_as | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- marshal_as
- msclr.interop.marshal_as
- msclr::interop::marshal_as
dev_langs: C++
helpviewer_keywords: marshal_as template [C++]
ms.assetid: 2ed717da-2b11-41e5-981d-47d251771989
caps.latest.revision: "17"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 1a209b1ee657d6ae6773ee88c64225a7dc5b4f49
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="marshalas"></a>marshal_as
Questo metodo converte i dati tra ambienti nativi e gestiti.  
  
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
 Questo metodo è un metodo semplificato per convertire i dati tra i tipi gestiti e nativi. Per determinare i tipi di dati supportati, vedere [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md). Alcune conversioni di dati richiedono un contesto. È possibile convertire i tipi di dati tramite il [classe marshal_context](../dotnet/marshal-context-class.md).  
  
 Se si tenta di effettuare il marshalling di una coppia di tipi di dati che non sono supportati, `marshal_as` genererà un errore [l'avviso C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md) in fase di compilazione. Leggere il messaggio fornito con l'errore per ulteriori informazioni. Il `C4996` errore può essere generato per le funzioni più semplicemente deprecate. Un esempio di questo sta tentando di effettuare il marshalling di una coppia di tipi di dati che non sono supportati.  
  
 La libreria del marshalling è costituito da diversi file di intestazione. Qualsiasi conversione richiede un solo file, ma se è necessario per le altre conversioni, è possibile includere file aggiuntivi. Per vedere quali conversioni sono associati a quali file, cercare nella tabella `Marshaling Overview`. Di quali conversione indipendentemente dal fatto che si desidera eseguire, il requisito di spazio dei nomi è sempre attivo.  
  
## <a name="example"></a>Esempio  
 In questo esempio effettua il marshalling da un `const char*` per un `System::String` tipo di variabile.  
  
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
  
## <a name="requirements"></a>Requisiti  
 **File di intestazione:** \<msclr\marshal.h >, \<msclr\marshal_windows.h >, \<msclr\marshal_cppstd.h >, o \<msclr\marshal_atl.h >  
  
 **Namespace:** msclr::interop  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md)   
 [Classe marshal_context](../dotnet/marshal-context-class.md)