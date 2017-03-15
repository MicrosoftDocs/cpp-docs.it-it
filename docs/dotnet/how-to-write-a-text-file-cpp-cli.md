---
title: "Procedura: scrivere un file di testo (C++/CLI) | Microsoft Docs"
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
  - "file [C++], testo"
  - "testo (file), scrittura in C++"
ms.assetid: 39ecdba6-84e0-485c-a202-84cf6d7b8d4a
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: scrivere un file di testo (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene illustrato come creare un file di testo e scrivere in tale file utilizzando la classe <xref:System.IO.StreamWriter>, definita nello spazio dei nomi <xref:System.IO>.  Il costruttore <xref:System.IO.StreamWriter> accetta il nome del file da creare.  Se il file esiste, viene sovrascritto \(a meno che non venga passato il valore True come secondo argomento del costruttore <xref:System.IO.StringWriter>\).  
  
 Il file viene quindi archiviato utilizzando le funzioni <xref:System.IO.StreamWriter.Write%2A> e <xref:System.IO.TextWriter.WriteLine%2A>.  
  
## Esempio  
  
```  
// text_write.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::IO;  
  
int main()   
{  
   String^ fileName = "textfile.txt";  
  
   StreamWriter^ sw = gcnew StreamWriter(fileName);  
   sw->WriteLine("A text file is born!");  
   sw->Write("You can use WriteLine");  
   sw->WriteLine("...or just Write");  
   sw->WriteLine("and do {0} output too.", "formatted");  
   sw->WriteLine("You can also send non-text objects:");  
   sw->WriteLine(DateTime::Now);  
   sw->Close();  
   Console::WriteLine("a new file ('{0}') has been written", fileName);  
  
   return 0;  
}  
```  
  
## Vedere anche  
 [I\/O di file e di flussi](../Topic/File%20and%20Stream%20I-O.md)   
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)