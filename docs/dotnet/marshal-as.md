---
title: marshal_as | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- marshal_as
- msclr.interop.marshal_as
- msclr::interop::marshal_as
dev_langs:
- C++
helpviewer_keywords:
- marshal_as template [C++]
ms.assetid: 2ed717da-2b11-41e5-981d-47d251771989
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 2f57db502be6e34d275e3aba0e7705992b3c4d0d
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45701623"
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
*input*<br/>
[in] Il valore che si desidera effettuare il marshalling in un `To_Type` variabile.  
  
## <a name="return-value"></a>Valore restituito  
 Una variabile di tipo `To_Type` che rappresenta il valore convertito di `input`.  
  
## <a name="remarks"></a>Note  
 Questo metodo è un metodo semplificato per convertire i dati tra i tipi nativi e gestiti. Per determinare i tipi di dati supportati, vedere [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md). Alcune conversioni di dati richiedono un contesto. È possibile convertire questi tipi di dati tramite il [marshal_context Class](../dotnet/marshal-context-class.md).  
  
 Se si prova a effettuare il marshalling dei tipi di dati che non sono supportati, una coppia `marshal_as` genererà un errore [l'avviso C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md) in fase di compilazione. Legge il messaggio fornito con l'errore per ulteriori informazioni. Il `C4996` errore può essere generato per le funzioni più semplicemente deprecate. Un esempio di questo sta provando a effettuare il marshalling di una coppia di tipi di dati che non sono supportati.  
  
 La libreria del marshalling è costituito da diversi file di intestazione. Qualsiasi conversione richiede un solo file, ma è possibile includere file aggiuntivi se è necessario per le altre conversioni. Per visualizzare quali conversioni sono associati a quali file, esaminare la tabella in `Marshaling Overview`. Di quali conversione indipendentemente dal fatto che si desidera eseguire, il requisito di spazio dei nomi è sempre attivo.  
  
## <a name="example"></a>Esempio  
 In questo esempio esegue il marshalling da un `const char*` a un `System::String` tipo della variabile.  
  
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