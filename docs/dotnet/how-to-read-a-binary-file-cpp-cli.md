---
title: 'Procedura: leggere un File binario (C + + CLI) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- files [C++], binary
- binary files, reading in C++
ms.assetid: 41ad9ad1-5cac-489c-874e-4bb3a649073a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 8411971c8bca79d9cb1809481b5a6be61b052262
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33129369"
---
# <a name="how-to-read-a-binary-file-ccli"></a>Procedura: leggere un file binario (C++/CLI)
Esempio di codice seguente viene illustrato come leggere i dati binari da un file, utilizzando due classi dal <xref:System.IO?displayProperty=fullName> dello spazio dei nomi: <xref:System.IO.FileStream> e <xref:System.IO.BinaryReader>. <xref:System.IO.FileStream> rappresenta il file effettivo. <xref:System.IO.BinaryReader> fornisce un'interfaccia per il flusso che consente l'accesso binario.  
  
 L'esempio di codice legge un file è denominato bin e contiene numeri interi in formato binario. Per informazioni su questo tipo di file, vedere [procedura: scrivere un File binario (C + + CLI)](../dotnet/how-to-write-a-binary-file-cpp-cli.md).  
  
## <a name="example"></a>Esempio  
  
```  
// binary_read.cpp  
// compile with: /clr  
#using<system.dll>  
using namespace System;  
using namespace System::IO;  
  
int main()   
{  
   String^ fileName = "data.bin";  
   try  
   {  
      FileStream^ fs = gcnew FileStream(fileName, FileMode::Open);  
      BinaryReader^ br = gcnew BinaryReader(fs);  
  
      Console::WriteLine("contents of {0}:", fileName);  
      while (br->BaseStream->Position < br->BaseStream->Length)  
         Console::WriteLine(br->ReadInt32().ToString());  
  
      fs->Close( );  
   }  
   catch (Exception^ e)  
   {  
      if (dynamic_cast<FileNotFoundException^>(e))  
         Console::WriteLine("File '{0}' not found", fileName);  
      else  
         Console::WriteLine("Exception: ({0})", e);  
      return -1;  
   }  
   return 0;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di file e di flussi](http://msdn.microsoft.com/Library/4f4a33a9-66b7-4cd7-a285-4ad3e4276cd2)   
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)