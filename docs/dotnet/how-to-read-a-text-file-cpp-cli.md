---
title: "Procedura: leggere un file di testo (C++/CLI) | Microsoft Docs"
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
  - "lettura di file di testo"
  - "testo (file), lettura"
ms.assetid: 80551c01-d769-4b6d-8db7-fd53bde21b62
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: leggere un file di testo (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene illustrato come aprire e leggere un file di testo una riga alla volta, utilizzando la classe <xref:System.IO.StreamReader>, definita nello spazio dei nomi <xref:System.IO?displayProperty=fullName>.  Vengono utilizzati un'istanza di questa classe per aprire un file di testo e quindi il metodo <xref:System.IO.StreamReader.ReadLine%2A?displayProperty=fullName> per recuperare ciascuna riga del file.  
  
 In questo esempio di codice viene letto un file denominato textfile.txt contenente del testo.  Per ulteriori informazioni su questo tipo di file, vedere [Procedura: scrivere un file di testo](../dotnet/how-to-write-a-text-file-cpp-cli.md).  
  
## Esempio  
  
```  
// text_read.cpp  
// compile with: /clr  
#using<system.dll>  
using namespace System;  
using namespace System::IO;  
  
int main()  
{  
   String^ fileName = "textfile.txt";  
   try   
   {  
      Console::WriteLine("trying to open file {0}...", fileName);  
      StreamReader^ din = File::OpenText(fileName);  
  
      String^ str;  
      int count = 0;  
      while ((str = din->ReadLine()) != nullptr)   
      {  
         count++;  
         Console::WriteLine("line {0}: {1}", count, str );  
      }  
   }  
   catch (Exception^ e)  
   {  
      if (dynamic_cast<FileNotFoundException^>(e))  
         Console::WriteLine("file '{0}' not found", fileName);  
      else  
         Console::WriteLine("problem reading file '{0}'", fileName);  
   }  
  
   return 0;  
}  
```  
  
## Vedere anche  
 [I\/O di file e di flussi](../Topic/File%20and%20Stream%20I-O.md)   
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)