---
title: "Procedura: scrivere un file binario (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file binari, scrittura in C++"
  - "file [C++], binaria"
ms.assetid: 35d97ee6-fc7e-4c36-be18-8bbb3b44b3ae
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: scrivere un file binario (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene illustrato come scrivere dati binari in un file.  Vengono utilizzate due classi dello spazio dei nomi <xref:System.IO>: <xref:System.IO.FileStream> e <xref:System.IO.BinaryWriter>.  <xref:System.IO.FileStream> rappresenta il file effettivo, mentre <xref:System.IO.BinaryWriter> fornisce un'interfaccia al flusso che consente l'accesso binario.  
  
 Nell'esempio di codice riportato di seguito viene scritto un file contenente integer in formato binario.  Questo file può essere letto utilizzando il codice fornito in [Procedura: leggere un file binario](../dotnet/how-to-read-a-binary-file-cpp-cli.md).  
  
## Esempio  
  
```  
// binary_write.cpp  
// compile with: /clr  
#using<system.dll>  
using namespace System;  
using namespace System::IO;  
  
int main()  
{  
   array<Int32>^ data = {1, 2, 3, 10000};  
  
   FileStream^ fs = gcnew FileStream("data.bin", FileMode::Create);  
   BinaryWriter^ w = gcnew BinaryWriter(fs);  
  
   try   
   {  
      Console::WriteLine("writing data to file:");  
      for (int i=0; i<data->Length; i++)  
      {  
         Console::WriteLine(data[i]);  
         w->Write(data[i]);  
      }  
   }  
   catch (Exception^)   
   {  
     Console::WriteLine("data could not be written");  
     fs->Close();  
     return -1;  
   }  
  
   fs->Close();  
   return 0;  
}  
```  
  
## Vedere anche  
 [I\/O di file e di flussi](../Topic/File%20and%20Stream%20I-O.md)   
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)