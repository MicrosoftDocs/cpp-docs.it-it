---
title: File I-O Classes | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.classes.file
dev_langs:
- C++
helpviewer_keywords:
- disk file classes [MFC]
- stdio classes [MFC]
- OLE streams [MFC]
- I/O [MFC], MFC classes
- translated stream classes [MFC]
- file I/O classes [MFC]
- I/O [MFC], classes
- sockets classes [MFC]
- stream classes [MFC]
- memory file classes [MFC]
ms.assetid: 92821c3f-d9e1-47f6-98c9-3b632d86e811
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: e6bcb29b88d170ad2b50c8db0b21c500825adfdc
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="file-io-classes"></a>File I/O Classes
These classes provide an interface to traditional disk files, in-memory files, Active streams, and Windows sockets. All of the classes derived from `CFile` can be used with a `CArchive` object to perform serialization.  
  
 Use the following classes, particularly `CArchive` and `CFile`, if you write your own input/output processing. Normally you do not need to derive from these classes. If you use the application framework, the default implementations of the **Open** and **Save** commands on the **File** menu will handle file I/O (using class `CArchive`), as long as you override your document's `Serialize` function to supply details about how a document serializes its contents. For more information about the file classes and serialization, see the article [Files in MFC](../mfc/files-in-mfc.md) and the article [Serialization](../mfc/serialization-in-mfc.md).  
  
 [CFile](../mfc/reference/cfile-class.md)  
 Provides a file interface to binary disk files.  
  
 [CStdioFile](../mfc/reference/cstdiofile-class.md)  
 Provides a `CFile` interface to buffered stream disk files, usually in text mode.  
  
 [CMemFile](../mfc/reference/cmemfile-class.md)  
 Provides a `CFile` interface to in-memory files.  
  
 [CSharedFile](../mfc/reference/csharedfile-class.md)  
 Provides a `CFile` interface to shared in-memory files.  
  
 [COleStreamFile](../mfc/reference/colestreamfile-class.md)  
 Uses the COM `IStream` interface to provide `CFile` access to compound files.  
  
 [CSocketFile](../mfc/reference/csocketfile-class.md)  
 Provides a `CFile` interface to a Windows Socket.  
  
## <a name="related-classes"></a>Related Classes  
 [CArchive](../mfc/reference/carchive-class.md)  
 Cooperates with a `CFile` object to implement persistent storage for objects through serialization (see [CObject::Serialize](../mfc/reference/cobject-class.md#serialize)).  
  
 [CArchiveException](../mfc/reference/carchiveexception-class.md)  
 An archive exception.  
  
 [CFileException](../mfc/reference/cfileexception-class.md)  
 A file-oriented exception.  
  
 [CFileDialog](../mfc/reference/cfiledialog-class.md)  
 Provides a standard dialog box for opening or saving a file.  
  
 [CRecentFileList](../mfc/reference/crecentfilelist-class.md)  
 Maintains the most recently used (MRU) file list.  
  
## <a name="see-also"></a>See Also  
 [Class Overview](../mfc/class-library-overview.md)


