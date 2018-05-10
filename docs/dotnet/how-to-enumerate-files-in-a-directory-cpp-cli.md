---
title: 'Procedura: enumerare i file in una Directory (C + + CLI) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- files [C++], listing files
- directories [C++], listing files
ms.assetid: ebfc2666-229f-4b94-a9a1-e8f1b5d946d6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 3c3cb6e3cd5cb209eafa01c64e343cdfd66bd3db
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="how-to-enumerate-files-in-a-directory-ccli"></a>Procedura: enumerare i file di una directory (C++/CLI)
Esempio di codice riportato di seguito viene illustrato come recuperare un elenco dei file in una directory. Inoltre, vengono enumerate le sottodirectory. Nell'esempio di codice viene illustrato come utilizzare il <xref:System.IO.Directory.GetFiles%2A> <xref:System.IO.Directory.GetFiles%2A> e <xref:System.IO.Directory.GetDirectories%2A> metodi per visualizzare il contenuto della directory c:\Windows.  
  
## <a name="example"></a>Esempio  
  
```  
// enum_files.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::IO;  
  
int main()  
{  
   String^ folder = "C:\\";  
   array<String^>^ dir = Directory::GetDirectories( folder );  
   Console::WriteLine("--== Directories inside '{0}' ==--", folder);  
   for (int i=0; i<dir->Length; i++)  
      Console::WriteLine(dir[i]);  
  
   array<String^>^ file = Directory::GetFiles( folder );  
   Console::WriteLine("--== Files inside '{0}' ==--", folder);  
   for (int i=0; i<file->Length; i++)  
      Console::WriteLine(file[i]);  
  
   return 0;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di file e di flussi](http://msdn.microsoft.com/Library/4f4a33a9-66b7-4cd7-a285-4ad3e4276cd2)   
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)